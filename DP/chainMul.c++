#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

int dp[100][100];

int mcm(int arr[], int i, int j) {
    if (i == j)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    dp[i][j] = INT_MAX;

    for (int k = i; k < j; k++) {
        int cost = mcm(arr, i, k)
                 + mcm(arr, k + 1, j)
                 + arr[i - 1] * arr[k] * arr[j];

        dp[i][j] = min(dp[i][j], cost);
    }

    return dp[i][j];
}

int main() {
    memset(dp, -1, sizeof(dp));

    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << mcm(arr, 1, n - 1);
}