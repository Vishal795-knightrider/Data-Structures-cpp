#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int g[100][100];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> g[i][j];

    int key[100];
    bool mst[100];

    for (int i = 0; i < n; i++) {
        key[i] = INT_MAX;
        mst[i] = false;
    }

    key[0] = 0;

    int cost = 0;

    for (int count = 0; count < n; count++) {

        int u = -1;

        // find minimum key vertex
        for (int i = 0; i < n; i++) {
            if (!mst[i] &&
               (u == -1 || key[i] < key[u])) {
                u = i;
            }
        }

        mst[u] = true;
        cost += key[u];

        for (int v = 0; v < n; v++) {

            if (g[u][v] != 0 &&
                !mst[v] &&
                g[u][v] < key[v]) {

                key[v] = g[u][v];
            }
        }
    }

    cout << cost;

    return 0;
}