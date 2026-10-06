// Given an integer array nums and an integer k, return the number of good subarrays of nums.
// A good array is an array where the number of different integers in that array is exactly k.

#include <bits/stdc++.h>
using namespace std;

//Brute force
int main(){
  int arr[]={1,2,1,2,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  int ans=0;
  cout << "Enter k: ";
  int k; cin >> k;
  for(int i=0;i<n;i++){
    set<int> st;
    for(int j=i;j<n;j++){
      st.insert(arr[j]);
      if(st.size()>k) break;
      if(st.size()==k) ans++;
    }
  }
  cout << "The no. of good subarray is " << ans;
}


