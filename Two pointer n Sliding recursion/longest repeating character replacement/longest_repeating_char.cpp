//Longest substring with at most k distinct characters

#include <bits/stdc++.h>
using namespace std;

//Brute force (explore all substrings )
int main(){
  string str="aaabbccd";
  cout << "Enter k: ";
  int k; cin >> k;
  int n=str.size();

  int maxlen=0;
  for(int i=0;i<n;i++){
    set<int> st;
    for(int j=i;j<n;j++){
      st.insert(str[j]);
      if(st.size()>k) break;
      maxlen=max(maxlen,j-i+1);
    }
  }
  cout << "longest substring is: " << maxlen;
}