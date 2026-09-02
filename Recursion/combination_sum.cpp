#include <bits/stdc++.h>
using namespace std;

void fn(int idx,int arr[],int tar,vector<vector<int>>& ans,vector<int>& v,int n){
  if(idx==n){
    if(tar==0) ans.push_back(v);
    return;
  }

  if(arr[idx]<=tar){
    v.push_back(arr[idx]);
    fn(idx,arr,tar-arr[idx],ans,v,n);
    v.pop_back();
  }
  fn(idx+1,arr,tar,ans,v,n);
}

int main(){
  int arr[]={2,3,4,5,6,7};
  cout << "enter target";
  int target; cin >> target;
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<vector<int>> ans;
  vector<int> vec;
  fn(0,arr,target,ans,vec,n);
  cout << "Combinations:" << endl;
    for (const auto& row : ans){
        for(int num :row) {
            cout << num << " ";
        }
        cout << endl;
    }
}