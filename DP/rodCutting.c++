def rod_cutting(price, n):
    dp = [0] * (n + 1)

    for i in range(1, n + 1):
        max_val = float('-inf')
        for j in range(1, i + 1):
            max_val = max(max_val, price[j] + dp[i - j])
        dp[i] = max_val

    return dp[n]




//added top down
#include <iostream>
#include <vector>
using namespace std;

int solve(int n, vector<int>& price, vector<int>& dp) {
    if (n == 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        ans = max(ans, price[i - 1] + solve(n - i, price, dp));
    }

    return dp[n] = ans;
}

int rodCutting(vector<int>& price, int n) {
    vector<int> dp(n + 1, -1);
    return solve(n, price, dp);
}

int main() {
    vector<int> price = {2, 5, 7, 8};
    int n = 4;

    cout << rodCutting(price, n);

    return 0;
}