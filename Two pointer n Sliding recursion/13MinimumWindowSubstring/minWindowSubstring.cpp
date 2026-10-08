// Given two strings s and t of lengths m and n respectively, 
// return the minimum window substring of s such that every character in t (including duplicates) is included in the window. 
// If there is no such substring, return the empty string "".

// Example 1:
// Input: s = "ADOBECODEBANC", t = "ABC"
// Output: "BANC"
// // Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.

#include <bits/stdc++.h>
using namespace std;

//brute force              (mine solution)
// int main(){
//   string s="ADOBECODEBANC"; string t="ABC";
//   int n=s.size(); int m=t.size();
//   if(n<m) cout << "";
//   int minlen=1e9;  
//   int startidx=-1;        //jo mujhe min leni substring nikalni hai uske starting idx nikalne ke liye
//   for(int i=0;i<n;i++){ 
//     unordered_map<char,int> mp;        //har baar  substring t, jo har new i se start hogi uske liye mp bna liya ab jo bhi character t string me hai unka count le liya
//     for(int k=0;k<m;k++){
//       mp[t[k]]++;
//     }

//     for(int j=i;j<n;j++){                  
//       if(mp.count(s[j])){           //check karo map me ki jo character aya as s[j] kya wo map me present hai tabhi uska count km krna hai
//         mp[s[j]]--;
//         if(mp[s[j]]==0) mp.erase(s[j]);   
//       }

//       if(mp.size()==0){            //agar map ka size 0 hogya matlab jitne bhi character "t" me the vo sab ab "s" me aa chuke hai that means you first valid window or sublenght
//         if(j-i+1<minlen) minlen=j-i+1;           
//         startidx=i;                       //ab vo jo valid window hai uska startidx store kr lo so that we can print that window 
//         break;            //break jo bhi pehle valid window tumhe vo sbse choti hogi kyu kyuki age to tum ab j ko badha hi rahe ho jiise lenght badengi 
//       }
//     }
//   }
//   if(startidx!=-1) cout << "The minimum window substring is: " << s.substr(startidx,minlen);         //s ka 1 substring jo startidx se start hoga and vo minlen ki len ka hoga
//   else cout << "";
// }

// Jab kisi fixed starting index i ke liye j aage badhta hai aur pehli baar mp.size() == 0 hota hai, toh wahi us i se start hone wali sabse choti (minimum length) valid substring hoti hai.

// Aisa kyu hota hai? Ise logic se samjho:
// Window grow ho rahi hai: Aap j ko i se aage badha rahe ho (j++). Iska matlab window ki lambai (j - i + 1) dheere-dheere badi ho rahi hai.

// Pehli baar valid hona: Jaise hi mp.size() == 0 hua, iska matlab pehli baar t ke saare characters us window (i se le kar current j tak`) me poore ho gaye hain.
// Kyu aur aage check nahi karna? Ab agar aap j ko aur aage badhaoge, toh window aur lambi hoti jayegi. Lekin humein toh minimum length chahiye. Jab chhote size me hi kaam ban gaya, toh aage badh kar aur lambi window check karne ka koi faayda nahi hai. Isliye wahin break kar dete hain taaki agle i par jaa sakein.
  



//brute (another solution)
int main(){
  string s="ADOBECODEBANC"; string t="ABC";
  int n=s.size(); int m=t.size();
  if(n<m) cout << "";
  int minlen=1e9;  
  int startidx=-1;
  for(int i=0;i<n;i++){
    int hash[256]={0};
    for(int k=0;k<m;k++){
      hash[t[k]]++;
    }
    int cnt=0;    //jese hi mujhe t ke char s me milega cnt inc krduga  aur jese hi vo t string ke size ke equal hoga yani vo puri t string s me aa chuki hai

    for(int j=i;j<n;j++){
      if(hash[s[j]]>0){          //agar s me jate hu s char ko map me dekho (map me t string ke char ke freq pade hue hai)  agar vo positiv hai iska s ka char t me present hai 
        cnt=cnt+1;         
        hash[s[j]]--;       //km karodge yeni vo char match hua aur hmne nikal diya
      }

      if(cnt==m){           
        if(j-i+1 < minlen) minlen=j-i+1;
        startidx=i;
        break;
      }
    }
  }
  if(startidx!=-1) cout << "The minimum window substring is: " << s.substr(startidx,minlen);
  else cout << "";
}