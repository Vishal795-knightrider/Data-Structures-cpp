#include <bits/stdc++.h>
using namespace std;


// using recusion like fibonacci
// int fnt(int n){
//         if(n==0) return 1;
//         if(n==1) return 1;
//         int left=fnt(n-1);
//         int right=fnt(n-2);
//         return left+right;
// }

// int main(){
//     int n; cin >> n;
//     int ans=fnt(n);
//     cout << "No of steps: " << ans;
// }


// Using Top down(memoistaion)

int stair(vector<int> &dp,int n){
    if(n==0 || n==1) return 1;

    if(dp[n]!=-1) return dp[n];

    return dp[n]=stair(dp,n-1)+stair(dp,n-2);
}

int main(){
    int n; cin >> n;
    vector<int> dp(n+1,-1);
    int ans=stair(dp,n);
    cout << "No. of steps: " << ans;
}