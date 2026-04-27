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