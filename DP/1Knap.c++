// greddy is not optimal 
// we need to try out all combinations among this we find the best val
// we use recursion



// express in terms of idx(idx,weight)
// explore all posiblities  (pick and non pick)
// max of all posiblicities we have to take 


//subsequence has to follow the order   subset may follow or may not


 #include <bits/stdc++.h>
using namespace std;

int f(int ind, int W, vector<int>& wt, vector<int>& val, vector<vector<int>>& dp) {
    if (ind == 0) {
        if (wt[0] <= W) return val[0];
        return 0;
    }

    if (dp[ind][W] != -1) return dp[ind][W];

    int notTake = f(ind - 1, W, wt, val, dp);

    int take = INT_MIN;
    if (wt[ind] <= W)
        take = val[ind] + f(ind - 1, W - wt[ind], wt, val, dp);

    return dp[ind][W] = max(take, notTake);
}

int main() {
    int n, W;
    cin >> n >> W;

    vector<int> val(n), wt(n);
    for (int i = 0; i < n; i++) cin >> val[i];
    for (int i = 0; i < n; i++) cin >> wt[i];

    vector<vector<int>> dp(n, vector<int>(W + 1, -1));

    cout << f(n - 1, W, wt, val, dp);
}