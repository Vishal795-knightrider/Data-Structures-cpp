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