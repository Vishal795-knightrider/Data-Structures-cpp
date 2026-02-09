#include <bits/stdc++.h>
using namespace std;


// int main(){
//      map<int,string> m;
//      m[1]="abc";
//      m[3]="hey";
//      m[6]="ghi";
//      m.insert({2,"hello"});
//      m.insert(make_pair(1,"hool"));
//      for(auto it: m){
//         cout << it.first << " " << it.second << endl;
//      }
// }

// keys stored in a sorted order and unique 






// int main(){
//     map<int,string> m;
//      m[1]="abc";
//      m[3]="hey";
//      m[6]="ghi";
//      m.insert({2,"hello"});
//     //  auto it = m.find(3);
//      auto it=m.find(2);  
//     //  find gives the itratror
//     if(it==m.end()){
//         cout << "No value";
//     }
//     else {
//         cout << (*it).first << " " << (*it).second << endl;
//     }
// }



// int main(){
//     map<int,string> m;
//      m[1]="abc";
//      m[3]="hey";
//      m[6]="ghi";
//      m.insert({2,"hello"});
//      auto it=m.find(3);
//      m.erase(2);
//      m.erase(it);
//      for(auto it:m){
//         cout << it.first << " " << it.second << endl;
//      }
// }



// given N strings ,print unique strings in lexiographical 
// order with thier frequency
// N<=10^5
// |S|<=100

int main(){
    map<string,int> m;
    int n;
    cout << "Enter no. of strings: ";
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        m[s]=m[s]+1;
    }
    for(auto it:m){
        cout << it.first << " " <<  it.second << endl;
    }
}



// given N strings,print unique strings in 
// lexiographical order with thier frequncy
//  N<=10^5
// |S|<=100
// // Q <= 10^6   ye query hai matlab jo tumne bhut sari string
// dali hai unme kitni string query quantity ki hai 

// int main(){
//     unordered_map<string,int> m;
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         string s;
//         cin >> s;
//         m[s]++;
//     }
//     int q;
//     cin >> q;
//     while(q--){
//         string s;
//         cin >> s;
//         cout << m[s] << endl;
//     }
// }