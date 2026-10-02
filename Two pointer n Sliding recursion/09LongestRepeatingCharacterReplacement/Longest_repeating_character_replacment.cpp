// Given a string s and an integer k, return the length of the longest substring that can be changed into a substring containing the same character after replacing at most k characters.
// You can replace any character in the substring with any other uppercase English character.

#include <bits/stdc++.h>
using namespace std;


//brute force (generate all substrings)
int main(){
  string str="AABABBA";
  int n=str.size();
  cout << "Enter k: ";
  int k; cin >>  k;
  int maxlen=0;
  for(int i=0;i<n;i++){
    int hash[26]={0};     //all capital letters
    int maxfreq=0;
    int changes=0;
    for(int j=i;j<n;j++){
      hash[str[j]-'A']++;
      maxfreq=max(maxfreq,hash[str[j]-'A']);      //this will find the maxfreq of each character so that we can check what character i have to replace to get the maxlen
      changes=(j-i+1)-maxfreq;               //kitne change honge current subsrting me
      if(changes<=k){                 //agar jitne chracter chnage krne hai vo agar k se equal ya km hai to maxlen nikalo
        maxlen=max(maxlen,j-i+1);
      }
      else break;
    }
  }
  cout << "Longest substring after replacing " << k << " charcater is: " << maxlen;
} 