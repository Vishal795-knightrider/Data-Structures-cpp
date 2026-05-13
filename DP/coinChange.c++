Input: sum = 4, coins[] = [1, 2, 3]
Output: 4
Explanation: There are four solutions: [1, 1, 1, 1], [1, 1, 2], [2, 2] and [1, 3]

Input: sum = 10, coins[] = [2, 5, 3, 6]
Output: 5
Explanation: There are five solutions: 
[2, 2, 2, 2, 2], [2, 2, 3, 3], [2, 2, 6], [2, 3, 5] and [5, 5]


f(2,4)-> till idx 2 how many ways you can form 4  



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int sum, n;
    cin >> sum;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    vector<long long> dp(sum + 1, 0);
    dp[0] = 1; // One way to make sum 0

    for (int coin : coins) {
        for (int i = coin; i <= sum; i++) {
            dp[i] += dp[i - coin];
        }
    }

    cout << dp[sum] << endl;

    return 0;
}


//memoization(top down)
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> dp;

int solve(int coins[], int n, int sum) {
    if (sum == 0) return 1;
    if (sum < 0) return 0;
    if (n <= 0) return 0;

    if (dp[n][sum] != -1)
        return dp[n][sum];

    return dp[n][sum] =
        solve(coins, n, sum - coins[n - 1]) +
        solve(coins, n - 1, sum);
}

int main() {
    int coins[] = {1, 2, 3};
    int sum = 4;
    int n = sizeof(coins) / sizeof(coins[0]);

    dp.resize(n + 1, vector<int>(sum + 1, -1));

    cout << solve(coins, n, sum);
}




//bootom up
#include <iostream>
using namespace std;

int main() {
    int coins[] = {1, 2, 3};
    int sum = 4;
    int n = 3;

    int dp[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int j = 1; j <= sum; j++)
        dp[0][j] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (coins[i - 1] <= j)
                dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n][sum];
}