#include <bits/stdc++.h>
using namespace std;

void fn(int idx,int sum,int arr[],vector<int> &subsetSum,int n){
  if(idx>=n){
    subsetSum.push_back(sum);
    return;
  }
  fn(idx+1,sum+arr[idx],arr,subsetSum,n);
  fn(idx+1,sum,arr,subsetSum,n);
}

int main(){
  int arr[]={1,2,3};
  int n=sizeof(arr)/sizeof(arr[1]);
  vector<int> subsetSum;
  fn(0,0,arr,subsetSum,n);
  sort(subsetSum.begin(),subsetSum.end());
  for(auto it:subsetSum){
    cout << it <<  " ";
  }
}