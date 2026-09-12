// -------------> maximum consecutive ones 3
// Given a binary array nums and an integer k, ans the maximum
// number of consecutive 1's in the array if you can flip at most k 0's.

 
// intution :kya hm ise yeh soch skte hau ki longest subarray
//           with max zeroes as k   


#include <bits/stdc++.h>
using namespace std;

//brute force

// int main(){
//   int arr[]={1,1,1,0,0,0,1,1,1,1,0};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout << "enter k";
//   int k; cin >>k;

//   int maxlen=0;
//   for(int i=0;i<n;i++){
//     int cnt=0;            //zeros cnt track krne ke liye
//     for(int j=i;j<n;j++){
//       if(arr[j]==0) cnt++;
//       if(cnt>k) break;              //agar zeroes ka cnt k se jyada to us subayya se bahar nikal jao
//       maxlen=max(maxlen,j-i+1);         //tc=o(n^2)
//     }   
//   }
//   cout << "maximum consecutive ones with at most k zeroes is: " << maxlen;
// }


//optimal