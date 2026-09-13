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
//     int cnt=0;            //current subarray mein total zeroes
//     for(int j=i;j<n;j++){
//       if(arr[j]==0) cnt++;
//       if(cnt>k) break;              //agar zeroes ka cnt k se jyada to us subayya se bahar nikal jao
//       maxlen=max(maxlen,j-i+1);         //tc=o(n^2)
//     }   
//   }
//   cout << "maximum consecutive ones with at most k zeroes is: " << maxlen;
// }


//better

// int main(){
//   int arr[]={1,1,1,0,0,0,1,1,1,1,0};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout << "enter k";
//   int k; cin >>k;

//   int l=0,r=0,maxlen=0;
//   int zero=0;
//   while(r<n){            //o(n)
//     if(arr[r]==0) zero++;
//     while(zero>k){                       //not  n alwayss     (worst case (n)   arr[1,1,1,1,1,0,0])
//       if(arr[l]==0) zero--;
//       l++;
//     }                                  
//     maxlen=max(maxlen,r-l+1);         
//     r++;                           
//   }                       //tc=o(2n)
//   cout << "maximum consecutive ones with at most k zeroes is: " << maxlen;
// }


//optimal

int main(){
  int arr[]={1,1,1,0,0,0,1,1,1,1,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout << "enter k";
  int k; cin >>k;

  int l=0,r=0,maxlen=0,zero=0;
  while(r<n){       // o(n)
    if(arr[r]==0) zero++;
    if(zero>k){
      if(arr[l]==0) zero--;
      l++;
    }
    int len=r-l+1;
    maxlen=max(maxlen,len);
    r++;
  }                   //tc=0(n)
  cout << "maximum consecutive ones with at most k zeroes is: " << maxlen;
}