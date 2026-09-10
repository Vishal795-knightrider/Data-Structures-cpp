#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[]={-1,7,3,4,5,2};
  int n=sizeof(arr)/sizeof(arr[1]);
  cout << "enter k :";
  int k; cin >> k;

  int sum=0;

  //first window
  for(int i=0;i<k;i++){
    sum+=arr[i];
  }
  int l=0,r=k-1;
  int maxsum=sum;
  while(r<n-1){    //n-1 isliye kyuki andar r++ hai agar r<n karo to when r==n-1 andar jayega then r++ which  become rrange out of bound
    sum-=arr[l];     //remove previous ele
    l++;
    r++;
    sum+=arr[r];     //add upcoming element
    maxsum=max(maxsum,sum);
  }
  cout << "maximum sum is " << maxsum;
}