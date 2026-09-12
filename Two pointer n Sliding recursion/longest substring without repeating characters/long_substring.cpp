//Longest substring without repeted character

#include <bits/stdc++.h>
using namespace std;

//Brute force  (genrate all substring)
// int main(){
//   string str="cabx^ssydk,s";
//   int n=str.size();

  

//   int maxlen=0;
//   for(int i=0;i<n;i++){
//     int hash[255]={0};    //255 characters (every character that exits strats at 0 and ends at 255 when we convert them to integer the ascii format)
//     for(int j=i;j<n;j++){          
//       if(hash[str[j]]==1) break;       //particular subaary me find krte krte agar duplicate aye then there is no use to see further bcpz of non repeating charactrs
//       maxlen=max(maxlen,j-i+1);      
//       hash[str[j]]=1;                    //sc=o(256)  hash array
//     }                                  //tc=o(n^2);
//   }                                 
//   cout << "the maximum length is: " << maxlen;
// }


//optimal 

int main(){
  string str="cabx^ssydk,s";
  int n=str.size();

  int hash[255]={0};                      
  int l=0,r=0,maxlen=0;
  while(r<n){       o(n)
    if(hash[str[r]]!=-1){   //iska matlab vo char present hai hash map me
      if(hash[str[r]]>=l) l=hash[str[r]]+1;   //tabhi updat krna hai jab hash map me present char come between l to r       (Because if the duplicate character is at index 5, the new window must start at index 6)
    }
    int len=r-l+1;
    maxlen=max(maxlen,len);
    hash[str[r]]=r;    //duplicate ki new idx bhi update krni hai
    r++;
  }
  cout << "The maximum length is: " << maxlen;       //tc=o(n)  sc=o(1)
}