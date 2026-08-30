#include <bits/stdc++.h>
using namespace std;

void fn(int idx,int arr[],vector<int> &v,int n){
  if(idx>=n){
    for(auto it:v) cout << it << " ";
    cout << endl;
    return;  
  }

  v.push_back(arr[idx]);
  fn(idx+1,arr,v,n);
  v.pop_back();
  fn(idx+1,arr,v,n);
}

int main(){
  int arr[]={1,2,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<int> vec;
  fn(0,arr,vec,n);
}