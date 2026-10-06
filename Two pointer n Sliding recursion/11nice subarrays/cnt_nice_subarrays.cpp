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
      if(arr[j]%2!=0) cnt++;    //it is ocunting the no of odd no.
      if(cnt==k) ans++;        //if that od no. count is equal to that is our valid subarary so ans++;
      if(cnt>k) break;
    }
  }
  cout << "no. of nice subarrays are: " << ans;
}



// we can treat odd as 1 and even as 0 in thid questions then 
// for brute and better solutin can use the same code in binary subaart sum


// optimal

int atMost(vector<int>& nums, int k) {
  if(k <0) return 0;
  int l = 0;
  int cnt = 0;
  int ans = 0;

  for(int r=0;r<nums.size();r++){
    if(nums[r] %2!=0) cnt++;
    while(cnt >k){
      if(nums[l]%2!= 0) cnt--;
      l++;
    }
    ans+=r-l+1;
  }
  return ans;
}

int numberOfOddSubarrays(vector<int>& nums,int k) {
        return atMost(nums,k)-atMost(nums,k-1);
      }