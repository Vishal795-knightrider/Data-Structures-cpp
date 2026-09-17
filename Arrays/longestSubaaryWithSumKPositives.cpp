// Longest Subarray with Sum k (array hav only positives ele)

#include <bits/stdc++.h>
using namespace std;

// Brute force (generate all subarrays)
int main(){
  int arr[]={1,2,3,1,1,1,1,4,2,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout << "Enter k: ";
  int k; cin >> k;
  int maxlen=0;
  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
      sum+=arr[j];
      if(sum==k) maxlen=max(maxlen,j-i+1);
    }
  }
  cout << "The longest subarray is: " << maxlen;
}