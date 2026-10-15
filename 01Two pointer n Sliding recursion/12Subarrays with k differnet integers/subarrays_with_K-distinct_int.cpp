// Given an integer array nums and an integer k, return the number of good subarrays of nums.
// A good array is an array where the number of different integers in that array is exactly k.

#include <bits/stdc++.h>
using namespace std;

//Brute force
// int main(){
//   int arr[]={1,2,1,2,3};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   int ans=0;
//   cout << "Enter k: "; 
//   int k; cin >> k;
//   for(int i=0;i<n;i++){
//     set<int> st;
//     for(int j=i;j<n;j++){
//       st.insert(arr[j]);
//       if(st.size()>k) break;
//       else if(st.size()==k) ans++;
//     }
//   }
//   cout << "The no. of good subarray is " << ans;
// }


// for optimal we will think about two pinter r and l that think fial here
// see in the image when l at idx=1 (at 1) and r at idx=6 (at 3) valid subarray bcoz 3 distinct integers
// but see inside there are multiple valid subaryya which we are not counting  liek [1,3,4], [1,1,3,4]


// therefore now we will think about no. of subarrays where diff integers <=k
// bcoz in this we are very sure when to move l and r
// see in the photo when l is at 1 and r is at 4 so  that is valdi bcoz 3 diff intergers <=k(k=3) so we adding the length of thsi into cnt bcoz
// it thsi bigger subarray is valdi then all his small subaryy will also valid so we just adding the length in cnt;


int fn(int arr[],int n,int k){
  int r=0;int l=0;int cnt=0;
  unordered_map<int,int> mp;      //<element,uskacount>
  while(r<n){            //o(n)
    mp[arr[r]]++;       
    while(mp.size()>k){            //throughotu it will take o(n)
      mp[arr[l]]--;
      if(mp[arr[l]]==0) mp.erase(arr[l]);
      l++;
    }
    cnt+=r-l+1;
    r++;
  }
  return cnt;
}

int main(){
  int arr[]={1,2,1,2,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout << "Enter k: "; 
  int k; cin >> k;
  int i=fn(arr,n,k);     //this is for finding the count of subaarys <= k
  int j=fn(arr,n,k-1);
  cout << "The no. of good subarray is " << i-j;
}

