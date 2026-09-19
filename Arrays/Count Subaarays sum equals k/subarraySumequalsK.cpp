//count Subarray sum equals K

#include <bits/stdc++.h>
using namespace std;

//brute force
// int main(){
//   int arr[]={1,2,3,-3,1,1,1,4,2,-3};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout << "Enter k";
//   int k; cin >> k;
//   int cnt=0;
//   for(int i=0;i<n;i++){
//     int sum=0;
//     for(int j=i;j<n;j++){
//       sum+=arr[j];
//       if(sum==k) cnt++;
//     }
//   }
//   cout << "There are " << cnt << " subarraya whose sum is " << k;
// }


//optimal (prefixsum)  mine code 
// int main(){
//   int arr[]={1,2,3,-3,1,1,1,4,2,-3};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout << "Enter k";
//   int k; cin >> k;
//   int sum=0;int cnt=0;
//   unordered_map<int,int> presum;   //<prefixsum, prefix ka cnt(kitni baar yeh prefix sum aya)>
//   for(int i=0;i<n;i++){
//     presum[sum]++;
//     sum+=arr[i];
//     int rem=sum-k;
//     if(presum.find(rem)!=presum.end()){
//       cnt+=presum[rem];
//     }
//   }
//   cout << "There are " << cnt << " subarraya whose sum is " << k;
// }

// video sol code
int main(){
  int arr[]={1,2,3,-3,1,1,1,4,2,-3};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout << "Enter k";
  int k; cin >> k;
  map<int,int> mpp;
mpp[0] = 1;
int preSum = 0;
int cnt = 0;
for(int i = 0; i <n; i++) {
    preSum += arr[i];                 //array elemenst add krte ja rahe hai presum nikalne ke liye
    int remove = preSum - k;              //check kari if previous their is sum =presum-k
    cnt += mpp[remove];              //agar vo presum hai to uska cnt add kardo
    mpp[preSum] += 1;                   //map me ab sum ke sath uska count  add kr rahe hai
}
cout << "count is " << cnt;
}

// Why mpp[0] = 1
// This is very clean way to handle subarrays that start from index 0.

// Suppose:
// arr = {1, 2, 3}
// k = 3

// Initially:
// mpp[0] = 1;
// preSum = 0;

// At i = 0:
// preSum = 1
// remove = 1 - 3 = -2
// No match.

// At i = 1:
// preSum = 3
// remove = 3 - 3 = 0

// Now:
// cnt += mpp[0];
// and:
// mpp[0] = 1

// So:
// cnt = 1

// That represents:
// {1,2}
// whose sum is 3.