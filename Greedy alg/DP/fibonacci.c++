#include  <bits/stdc++.h>
using namespace std;


//1.
// int fib(int n,vector<int> &dp){
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=fib(n-1,dp)+fib(n-2,dp);
// }
// int main(){
//     int n; cin >> n;
//     vector<int> dp(n+1,-1);            //tc=o(n)    sc=o(n)(tech stack)+o(n)
//     int ans=fib(n,dp);
//     cout << ans;
// }

//2.
// int main(){
//     int n; cin >> n;
//     vector<int> dp(n+1);
//     dp[0]=0; dp[1]=1;
//     for(int i=2;i<=n;i++){            //tc =o(n)   sc=o(n)
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     cout << dp[n];
// }




//3.
// int main(){
//       int n; cin >> n;
//       int prev2=0,prev=1;
//       int curi=0;
//       for(int i=2;i<=n;i++){
//         curi=prev2+prev;
//         prev2=prev;
//         prev=curi;
//       }                             //tc=o(n)   sc=o(1)
//       cout << curi;
// }







