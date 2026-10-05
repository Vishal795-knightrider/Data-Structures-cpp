// Given an integer array nums and an integer k, return the number of nice subarrays.
// A nice subarray is a contiguous subarray that contains exactly k odd numbers.

#include <bits/stdc++.h>
using namespace std;

//brute force
int main(){
  int arr[]={1,1,2,1,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout << "Enter k: ";
  int k; cin >> k;
  int ans=0;
  for(int i=0;i<n;i++){
    int cnt=0;
    for(int j=i;j<n;j++){
      if(arr[j]%2!=0) cnt++;
      if(cnt==k) ans++;
      if(cnt>k) break;
    }
  }
  cout << "no. of nice subarrays are: " << ans;
}