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
int main(){
  string str="aaabbccd";
  cout << "Enter k: ";
  int k; cin >> k;
  int n=str.size();

  int l=0,r=0,maxlen=0;
  unordered_map<char,int> mp;
  while(r<n){
    mp[str[r]]++;
    while(mp.size()>k){
      mp[str[l]]--;
      if(mp[str[l]]==0) mp.erase(str[l]);
      l++;
    }
    maxlen=max(maxlen,r-l+1);
    r++;
  }                                               //tc=o(n)+o(n)=o(2n)
  cout << "longest substring is: " << maxlen;
}
