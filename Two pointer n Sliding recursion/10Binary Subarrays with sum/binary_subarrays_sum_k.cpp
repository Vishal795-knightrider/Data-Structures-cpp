// Given a binary array nums and an integer goal, return the number of non-empty subarrays with sum equal to goal.
#include <bits/stdc++.h>
using namespace std;

// brute force (genrate all subaarys)
// int main(){
//   int arr[]={1,0,1,0,1};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout << "Enter goal ";
//   int goal; cin >> goal;
//   int cnt=0;
//   for(int i=0;i<n;i++){
//     int sum=0;
//     for(int j=i;j<n;j++){
//       sum+=arr[j];
//       if(sum==goal) cnt++;
//     }
//   }
//   cout << "The no of subaarys is: " << cnt;
// }


// Better
// int main(){
//   int arr[]={1,0,1,0,1};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout << "Enter goal ";
//   int goal; cin >> goal;
//   unordered_map<int,int> presum;
//   presum[0]=1;     //0 kitni baar aya 1 baar aya
//   int sum=0;
//   int cnt=0;
//   for(int i=0;i<n;i++){
//     sum+=arr[i];
//     int rem=sum-goal;
//     if(presum.find(rem)!=presum.end()){
//       cnt+=presum[rem];    //agar tumhara sum(rem) which is sum -goal is pressetn previously then uska cnt add krdo cnt me 
//     }
//     presum[sum]++;   //linerly jate hue jo bhi sum aaa rha ahai uska count store kr rahe hai (vo sum kitni baar aa raha hai)
//   }
//   cout << "The no of subaarys is: " << cnt;
// }