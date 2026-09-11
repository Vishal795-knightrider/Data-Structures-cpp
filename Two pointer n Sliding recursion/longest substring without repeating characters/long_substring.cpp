//Longest substring without repeted character

#include <bits/stdc++.h>
using namespace std;

//Brute force
int main(){
  string str="cabx^ssydk,s";
  int n=str.size();

  

  int maxlen=0;
  for(int i=0;i<n;i++){
    int hash[255]={0};
    for(int j=i;j<n;j++){          
      if(hash[s[j]]==1) break;
      maxlen=max(maxlen,j-i+1);
      hash[s[j]]=1;                    //sc=o(256)
    }                                  //tc=o(n^2);
  }                                 
  cout << "the maximum length is: " << maxlen;
}