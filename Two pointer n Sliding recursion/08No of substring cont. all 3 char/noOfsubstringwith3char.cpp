//no of substring containing all three character (the give string only contain abc characters)

#include <bits/stdc++.h>
using namespace std;


//brute force which i think of
// int main(){
//   string str="bbacba";
//   int n=str.size();
//   int cnt=0;
//   for(int i=0;i<n;i++){
//     set<char> st;
//     for(int j=i;j<n;j++){
//       st.insert(str[j]);
//       if(st.size()==3) cnt++;        //when set size bexome 3 after for evry new character it always satify so we can write also cnt=(n-j) then break (time complexity better)
//     }
//   }
//   cout << "no of substring are: " << cnt;
// }

//brute force
// int main(){
//   string str="bbacba";
//   int n=str.size();
//   int cnt=0;
//   for(int i=0;i<n;i++){
//     int hash[3]={0};    //we onlyy have a,b and c
//     for(int j=i;j<n;j++){
//       hash[str[j]-'a']=1;    //agar a aya to a-a=0 agar b aya to b-a=1 iska matlab a 1 ke barabar ,aur agar vo aya string me iska matlab hash[0] 1 hona chhnahiey
//       if(hash[0]+hash[1]+hash[2]==3) cnt++;    //agar teno me add krke 3 aa raha hai iska matlab they all are appeared
//     }
//   }
//   cout << "no of substring are: " << cnt;
// }

// Why this works?
// Mapping:
// 'a' - 'a' = 0
// 'b' - 'a' = 1
// 'c' - 'a' = 2

// So:
// freq[str[j] - 'a'] = 1;
// means:
// If a appears → freq[0] = 1
// If b appears → freq[1] = 1
// If c appears → freq[2] = 1



//optiimal
// we have to make sure that we want the window which have all 3 chharacters
// but we have figure out number , we have to count, its not longest that we expand or shrink

// intution:with every character there is a substring that ends


int main(){
  string str="bbacba";
  int n=str.size();
  int cnt=0;
  int lastseen[3]={-1,-1,-1};
  for(int i=0;i<n;i++){
    lastseen[str[i]-'a']=i;    //har charcter ki last seen idx store kr rahe hai, agar a aya a-a=0 matlab ab jabhi bhi a ki idx dekhni hai to 0 ki idx check karo
    if(lastseen[0]!=-1 && lastseen[1]!=-1 && lastseen[2]!=-1){   //check kr rahe hau ki agar a ,b ya c present hau kya, to str[0] matlab a ,bcoz we have previouly done lasttseen[str[a]-a]
      cnt=cnt+(1+min( {lastseen[0],lastseen[1],lastseen[2]} ));  //jaise hi teen character mil gye check krna jitnee bhi characters aye usme se sabse km idx kiski hai iska matlab us idx wale charater se i tak min window hogi jisme tenno characters honge
    }
  }
  cout << "No of subarrays which contain all 3 characters are: " << cnt;
}

// Why min(lastseen) + 1?
// String:
// bbacba

// index:  0 1 2 3 4 5
// char:   b b a c b a

// At i = 3:
// lastseen[a] = 2
// lastseen[b] = 1
// lastseen[c] = 3

// Minimum index:
// min(2,1,3) = 1

// Valid starting indexes:
// 0 and 1

// Valid substrings ending at index 3:
// "bbac"
// "bac"

// Count:
// 1 + minIndex
// = 1 + 1
// = 2