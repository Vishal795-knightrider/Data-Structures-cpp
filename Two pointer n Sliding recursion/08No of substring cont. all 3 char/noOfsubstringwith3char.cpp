//no of substring containing all three character (the give string only contain abc characters)

#include <bits/stdc++.h>
using namespace std;



int main(){
  string str="bbacba";
  int n=str.size();
  int cnt=0;
  for(int i=0;i<n;i++){
    set<int> st;
    for(int j=i;j<n;j++){
      st.insert(str[j]);
      if(st.size()==3) cnt++;
    }
  }
  cout << "no of substring are: " << cnt;
}





int main(){
  string str="bbacba";
  int n=str.size();
  int cnt=0;
  for(int i=0;i<n;i++){
    hash[3]={0};
    for(int j=i;j<n;j++){
      hash[str[j]-'a']=1;    //agar a aya to a-a=0 agar b aya to b-a=1 iska matlab a 1 ke barabar aur agar vo aya iska matlab hash[0] 1 hona chhnahiey
      if(hash[0]+hash[1]+hash[2]===3) cnt++;    //agar teno me add krke 3 aa raha hai iska matlab they all are appeared 
    }
  }
  cout << "no of substring are: " << cnt;
}

