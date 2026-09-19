//count Subarray sum equals K

#include <bits/stdc++.h>
using namespace std;

//brute force
int main(){
  int arr[]={1,2,3,-3,1,1,1,4,2,-3};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout << "Enter k";
  int k; cin >> k;
  int cnt=0;
  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
      sum+=arr[j];
      if(sum==k) cnt++;
    }
  }
  cout << "There are " << cnt << " subarraya whose sum is " << k;
}