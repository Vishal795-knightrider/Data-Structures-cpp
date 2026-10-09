// Given a string s consisting only of characters a, b and c.
// Return the number of substrings containing at least one occurrence of all these characters a, b and c.


// Example 1:
// Input: s = "abcabc"
// Output: 10

// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 
#include <bits/stdc++.h>
using namespace std;

//brute mine thinking
// int main(){
//   string s="aaacb";   //given in question
//   string str="abc";
//   int n=s.size();
//   int ans=0;
//   for(int i=0;i<n;i++){
//     unordered_map<char,int> mp;
//     for(int k=0;k<str.size();k++){
//       mp[str[k]]++;                      //kyuki sirf 3 charcter honw chahiye kam se km to map le liya
//     }     
//     for(int j=i;j<n;j++){
//       if(mp.count(s[j])){          //agar jo map me hai vo se agya to uska count km krdo
//         mp[s[j]]--;
//         if(mp[s[j]]==0) mp.erase(s[j]);
//       }
//       if(mp.size()==0){
//         ans+=n-j;
//         break;
//       }
//     }
//   }
//   cout << "No of substrings containing at least one occurrence of the characters a, b and c: " << ans;
// }


//genral code
int main(){
  string s="abcabc";
  int ans=0;
  int n=s.size();
  for(int i=0;i<n;i++){
    int hash[3]={0};
    for(int j=i;j<n;j++){
      hash[s[j]-'a']++;                        //hash[a-a]=hash[0] means it will store the count of a similarlt hash[1] for b ..
      if(hash[0]>0 & hash[1]>0 & hash[2]>0){
        ans+=n-j;
        break;
      }
    }
  }
  cout << "No of substrings containing at least one occurrence of the characters a, b and c: " << ans;
}