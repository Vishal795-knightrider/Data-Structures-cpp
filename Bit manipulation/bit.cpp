#include <bits/stdc++.h>
using namespace std;

// convert deci to binary

// string deci2bin(int n){
//     string res="";
//     while(n!=0){
//         if(n%2==1) res+='1';
//         else res+='0';
//         n=n/2;
//     }
//     reverse(res.begin(),res.end());
//     return res;
// }

// int main(){
//     int n; cin >> n;
//     cout << deci2bin(n);
// }


//convert bin to decimal

// int dec2bin(string str){
//     int num=0;
//     int n=str.size()-1;
//     int powerof2=1;
//     for(int i=n;i>=0;i--){
//         if(str[i]=='1'){
//             num=num+powerof2;
//         }
//         powerof2 *=2;
//     }
//     return num;
// }
// int main(){
//     string str; cin >> str;
//     cout << dec2bin(str);
// }

// SWAP 2 NUMBERS

// int main(){
//     int a,b; cin >> a >> b;
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     cout << a << " " << b;
// }


//IF THE Ith BIT IS SET OR NOT

// --> using left shift operator
// int main(){
//     int n; cin >> n;
//     int i; cin >> i;

//     if((n &(1<<i))!=0) cout << "true";
//     else cout << "false";
// }

// --> using right operator
// int main(){
//     int n; cin >> n;
//     int i; cin >>i;
//     if(((n>>i)&1)!=0) cout << "true";
//     else cout << "false";
// }

//SET THE Ith BIT

// int main(){
//     int n; cin >> n;
//     int i; cin >> i;
//     cout << (n|(1<<i));
// }

