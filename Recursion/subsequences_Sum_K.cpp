#include <bits/stdc++.h>
using namespace std;

// void fn(int idx,int arr[],vector<int> &v,int n,int k,int sum){
//   if(idx==n){
//     if(sum==k){
//       for(auto it:v) cout << it << " ";
//       cout << endl;
//     }
//     return;
//   }
//   v.push_back(arr[idx]);
//   sum+=arr[idx];
//   fn(idx+1,arr,v,n,k,sum);

//   sum-=arr[idx];
//   v.pop_back();
//   fn(idx+1,arr,v,n,k,sum);
// }

// int main(){
//   int arr[]={1,2,1};
//   cout << "enter k : ";
//   int k; cin >> k;
//   int n=sizeof(arr)/sizeof(arr[0]);
//   vector<int> vec;
//   fn(0,arr,vec,n,k,0);
// }


//we have to print only one answer
bool fn(int idx,int arr[],vector<int> &v,int n,int k,int sum){
  if(idx==n){
    //when first time satisfied its all over
    if(sum==k){
      for(auto it:v) cout << it << " ";
      cout << endl;
      return true;
    }
    //conditon not satisfied
    else return false;
  }
  v.push_back(arr[idx]);
  sum+=arr[idx];
  if(fn(idx+1,arr,v,n,k,sum)==true) return true;

  sum-=arr[idx];
  v.pop_back();
  if(fn(idx+1,arr,v,n,k,sum)==true) return true;

  return false;
}

int main(){
  int arr[]={1,2,1};
  cout << "enter k : ";
  int k; cin >> k;
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<int> vec;
  fn(0,arr,vec,n,k,0);
}