#include <bits/stdc++.h>
using namespace std;

struct Item {
    double w, v;
};

bool cmp(Item a, Item b) {
    double r1 = a.v / a.w;
    double r2 = b.v / b.w;

    if (r1 == r2)
        return a.w > b.w;

    return r1 > r2;
}

int main() {
    int n;
    double W;
    cin >> n >> W;

    vector<Item> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i].w >> a[i].v;

    sort(a.begin(), a.end(), cmp);

    double total = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {

        if (W <= 0) break;

        if (a[i].w <= W) {
            total += a[i].v;
            W -= a[i].w;
            cnt++;
        }
        else {
            total += (a[i].v / a[i].w) * W;
            cnt++;
            break;
        }
    }

    cout << fixed << setprecision(2) << total << " " << cnt;
}