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




// Agar tum while(zero > k) ki jagah if(zero > k) use karte ho, toh code bilkul sahi kaam karega. In fact, isse tumhara code ek aur zyada advance aur optimal pattern mein convert ho jayega jise hum "Non-shrinkable Sliding Window" kehte hain.
// Chalo dekhte hain yeh kaise kaam karta hai aur iska logic kya hai:

// 1. while loop (Shrinkable Window)
// Jab hum while use karte hain, toh jaise hi hamari window invalid hoti hai (zero > k), hum l ko tab tak aage badhate hain jab tak window wapas se puri tarah valid na ho jaye. Is process mein hamari window ka size chhota ho jata hai. Hum har valid point par length calculate karke uska maximum nikalte hain.

// 2. if condition (Non-shrinkable Window)
// Agar tum while ki jagah if laga do:

// if (zero > k) {
//     if (arr[l] == 0) zero--;
//     l++;
// }
// Ab jab window invalid hogi, toh l sirf ek baar aage badhega. Aur loop ke aakhri mein r toh hamesha ek baar aage badhta hi hai (r++). Iska matlab, invalid hone par l aur r dono ek-ek step aage badh gaye.
// Yeh approach kyun kaam karti hai? (The Core Logic)
// Hamara main goal hai maximum length nikalna.
// Maan lo kisi point par tumhein ek valid window mil gayi jiska size 5 hai. Ab aage chal kar humein 4 ya 3 length ki window check karne ki zaroorat hi nahi hai, kyunki hume toh 5 ya usse badi (6, 7..) window chahiye.
// Jab tum if(zero > k) lagate ho, toh window invalid hone par bhi apna size chhota nahi karti, wo sirf aage "khisak" (slide ho) jati hai. (Kyunki l aur r dono saath mein 1 step badhe).
// Window ka size sirf tab bada hoga jab aage aane wali window valid ho (yaani if condition false ho). Us case mein sirf r aage badhega (l wahi rahega) aur window ki length ek aur badh jayegi!