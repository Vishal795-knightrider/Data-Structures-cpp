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

// now we have  sc=o(n) so to deduce this we all use two pointer
// that two approch with r and l pointer will faill here bcoz when there is l on 0 sum will not decresase and remains the same (so will misses out some subarrays)
//so therefore we count no. of subaarys for sum <= goal and sum <=(goal-1)  then after differnece of these we will get the count of sum==goal 

//optimal

int fn(int arr[],int goal,int n){
  int left=0;
  int cnt=0;
  int sum=0;
  if(goal<0) return 0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    while(sum>goal){
      sum-=arr[left];
      left++;
    }
    cnt+=(i-left+1);     //agar tum kisi bhi current window pe ho aur uska sum <= goal hai to no. of sunarray <= goal is uska current window ka size hoga
  }
  return cnt;
}

int main(){
  int arr[]={1,0,1,0,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout << "Enter goal ";
  int goal; cin >> goal;
  int i=fn(arr,goal,n);
  int j=fn(arr,goal-1,n);
  cout << "The no of subaarys is: " << i-j;
}