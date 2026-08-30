#include <bits/stdc++.h>
using namespace std;

void fn(int idx,int arr[],vector<int> &v,int n,int k,int sum){
  if(idx==n){
    if(sum==k){
      for(auto it:v) cout << it << " ";
      cout << endl;
    }
    
    return;
  }
  v.push_back(arr[idx]);
  sum+=arr[idx];
  fn(idx+1,arr,v,n,k,sum);

  sum-=arr[idx];
  v.pop_back();
  fn(idx+1,arr,v,n,k,sum);
}

int main(){
  int arr[]={1,2,1};
  cout << "enter k : ";
  int k; cin >> k;
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<int> vec;
  fn(0,arr,vec,n,k,0);
}