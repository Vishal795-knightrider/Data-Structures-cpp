// Given a binary array nums and an integer goal, return the number of non-empty subarrays with sum equal to goal.
#include <bits/stdc++.h>
using namespace std;

// brute force (genrate all subaarys)
int main(){
  int arr[]={1,0,1,0,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout << "Enter goal ";
  int goal; cin >> goal;
  int cnt=0;
  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
      sum+=arr[j];
      if(sum==goal) cnt++;
    }
  }
  cout << "The no of subaarys is: " << cnt;
}