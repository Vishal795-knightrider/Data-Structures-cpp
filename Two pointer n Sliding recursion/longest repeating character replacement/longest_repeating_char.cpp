//Longest substring with at most k distinct characters

#include <bits/stdc++.h>
using namespace std;

//Brute force (explore all substrings )

// int main(){
//   string str="aaabbccd";
//   cout << "Enter k: ";
//   int k; cin >> k;
//   int n=str.size();

//   int maxlen=0;
//   for(int i=0;i<n;i++){
//     set<int> st;
//     for(int j=i;j<n;j++){
//       st.insert(str[j]);
//       if(st.size()>k) break;
//       maxlen=max(maxlen,j-i+1);
//     }
//   }
//   cout << "longest substring is: " << maxlen;
// }



//Better
// int main(){
//   string str="aaabbccd";
//   cout << "Enter k: ";
//   int k; cin >> k;
//   int n=str.size();

//   int l=0,r=0,maxlen=0;
//   unordered_map<char,int> mp;
//   while(r<n){
//     mp[str[r]]++;
//     while(mp.size()>k){
//       mp[str[l]]--;
//       if(mp[str[l]]==0) mp.erase(str[l]);
//       l++;
//     }
//     maxlen=max(maxlen,r-l+1);
//     r++;
//   }                                               //tc=o(n)+o(n)=o(2n)
//   cout << "longest substring is: " << maxlen;
// }


//optimal  here we are reducing  the inner while loop( while(mp.size()>k) which uses above)

int main(){
  string str="aaabbccd";
  cout << "Enter k: ";
  int k; cin >> k;
  int n=str.size();

  int l=0,r=0,maxlen=0;
  unordered_map<char,int> mp;
  while(r<n){
    mp[str[r]]++;
    if(mp.size()>k){     //yaha hmne if lagaya kyuki agar man lo tumhari maxlen 5 ho chuki hai
      mp[str[l]]--;      //and ab tumhari mp ka size 3 ho gya, condition fails see the str given in question tum ab 'a ko remove karoge 3 baar then valid window bnegi size 3 ki
      if(mp[str[l]]==0) mp.erase(str[l]);   //but hame jarurat hi nhi hamari 5 maxlen ho chuki to hame use age 6 ya 7 ke liye jana hai to bs 1 ele remove karo left se and r ko age badha you will always get the maxlen biiger than curent maxlen if its valid case that measn onlu when mp size <=k
      l++;
    }
    maxlen=max(maxlen,r-l+1);
    r++; 
  }                        //tc=o(n)+o(log256)  sc=o(256) -> max 256 characters
  cout << "longest substring is: " << maxlen;
}
