#include <bits/stdc++.h>
using namespace std;

struct Job {
    char id;
    int dead, profit;
};

bool cmp(Job a, Job b) {
    return a.profit > b.profit;
}

int main() {
    int n;
    cin >> n;

    Job a[n];
    int maxD = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i].id >> a[i].dead >> a[i].profit;
        maxD = max(maxD, a[i].dead);
    }

    sort(a, a + n, cmp);

    vector<char> slot(maxD + 1, 0);

    int profit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = a[i].dead; j > 0; j--) {
            if (slot[j] == 0) {
                slot[j] = a[i].id;
                profit += a[i].profit;
                break;
            }
        }
    }

    // print jobs in order
    for (int i = 1; i <= maxD; i++) {
        if (slot[i] != 0)
            cout << slot[i] << " ";
    }

    cout << endl << profit;
}