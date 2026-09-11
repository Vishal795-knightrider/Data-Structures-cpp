#include <bits/stdc++.h>
using namespace std;

// 1.Brute force generate all subarays

// int main(){
//   int arr[]={1,2,3,4,5,6};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout << "Enter k: ";
//   int k; cin >> k;

//   int maxlen=0;
//   for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//       int sum=0;
//       for(int k=i;k<=j;k++){   //yeh k loop sari subarray generate kr raha hai
//         sum+=arr[k];
//       }

//       //agar us subarray ka sum <= k hai tabhi us subarray ko lena hai
//       if(sum<=k){
//       maxlen=max(maxlen,j-i+1);
//       }

//     }
//   }
//   cout << "the maximum subarray is " << maxlen;
// }

// But this is inefficient ❌
// We are calculating the sum repeatedly.
// For example:
// [1,2]       → 1+2
// [1,2,3]     → 1+2+3
// [1,2,3,4]   → 1+2+3+4
// The 1+2 part gets calculated again and again.
// So we can improve it.

// brute force : running sum (removing k loop)

// int main(){
//   int arr[]={1,2,3,4,5,6};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout << "Enter k: ";
//   int k; cin >> k;

//   int maxlen=0;
//   for(int i=0;i<n;i++){
//     int sum=0;
//     for(int j=i;j<n;j++){
//       sum+=arr[j];

//       if(sum<=k){
//       maxlen=max(maxlen,j-i+1);
//       }
//       else if(sum>k) break;
//     }
//   }
//   cout << "the maximum subarray is " << maxlen;
// }

//2. Better solutin ( 2pointer  n sliding window)   sum <=k
// (it will only work we have +ve integers)

// int main(){
//   nt arr[]={1,2,3,4,5,6};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout << "Enter k: ";
//   int k; cin >> k;

//   int r=0,l=0; int sum=0; int mxlen=0;
//   while(r<n){       //tc=o(n)
//     sum+=arr[r];
//     while(sum>k){  //agar element add krte krte SUM bada ho gya hao to shrink karo by removing ele from left
//       sum-=arr[l];
//       l++;
//     }
//     if(sum<=k){
//       mxlen=max(mxlen,r-l+1);  // kisi bhi time when sum <=k hoga us time subarray ki len =(r-l+1)   (agar question me vo appse subarray hi mng raha hai to store that l and r)
//     }
//     r++;
//   }
//   cout << "the maxmum subarray is: " << mxlen;
// }

// if we have to print the subarray (in this we have to store best l and r )


// int main(){
//   int arr[]={1,2,3,4,5,6};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout << "Enter k: ";
//   int k; cin >> k;

//   int l=0,r=0,sum=0,mxlen=0;
//   int bestl,bestr=0;

//   while(r<n){
//     sum+=arr[r];
//     while(sum>k){
//       sum-=arr[l];
//       l++;
//     }
//     if(sum<=k){
//       if(r-l+1>mxlen){
//         mxlen=r-l+1;
//         bestl=l;
//         bestr=r;
//       }
//     }
//     r++;
//   }

//   cout << "Subarray is: ";
//   for(int i=bestl;i<=bestr;i++){
//     cout << arr[i] << " ";
//   }
// }