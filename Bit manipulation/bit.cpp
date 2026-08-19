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

//CLEAR THE Ith BIT

// int main(){
//     int n; cin >> n;
//     int i; cin >> i;
//     cout <<( n&( ~(1<<i)));
// }

// TOGGLE THE Ith BIT  (0 to 1 n 1 to 0)
// int main(){
//     int n; cin >> n;
//     int i; cin >> i;
//     cout << (n^(1<<i));
// }


// REMOVE LAST SET BIT (RIGHTMOST)

// int main(){
//     int n; cin >> n;
//     cout << (n&(n-1));
// }

// CHECK IF NUMBER IS A POWER OF 2
// int main(){
//     int n; cin >> n;
//     if ((n & n-1)==0) cout << "true";
//     else cout << "false";
// }

// COUNT THE NO. OF SET BITS

// 1.
// int main(){
//     int n; cin >> n;
//     int cnt=0;
//     while(n!=0){
//         if(n%2==1) cnt++;
//         n=n/2;
//     }
//     cout << cnt;
// }

// 2.
// int main(){
// int n; cin >> n;
// int cnt = 0;
// while (n != 0) {
//     if (n & 1) cnt++; // Checks if the last bit is 1 (last bit is 1 in case of odd thats why rem shoul be 1 and then cnt++)
//     n = n >> 1;       // Right-shifts bits by 1 (that is n/2)
// }
// cout << cnt;
// }

// 3.
// int main(){
// int n; cin >> n;
// int cnt = 0;
// while (n != 0) {
//     n = n & (n - 1);   // Clears the lowest set bit (one by one clearing the set bit )  best approch to find this
//     cnt++;
// }
// cout << cnt;
// }