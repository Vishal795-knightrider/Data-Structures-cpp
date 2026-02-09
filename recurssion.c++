#include <bits/stdc++.h>
using namespace std;


//print names n times

// void name(int i,int n){
//     if(i>n) return;
//     else{
//         cout << "Vishal" << endl;
//         name(i+1,n);
//     }
// }

// int main(){
//     int n,i=1;
//     cin >> n;
//     name(i,n);
// }






// print linearly 1 to n

// void print(int i,int n){
//     if(i>n)  return;
//     else{
//         cout << i << " ";
//         print(i+1,n);
//     }
// }

// int main(){
//     int n,i=1;
//     cin >> n;
//     print(i,n);
// }


//print n to 1

// void print(int n){
//     if(n<1) return;
//     else{
//         cout << n << " ";
//     }
//     n--;
//     print(n);
// }

// int main(){
//     int n;
//     cin >> n;
//     print(n);
// }



// print 1 t N using backtrack
  
// void print(int n){
//     if(n<1) return;
//     else{
//         print(n-1);
//         cout << n << " ";
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     print(n);
// }


// print n to 1 using backtrack
 
// void print(int i,int n){
//     if(i>n) return;
//     else{
//         print(i+1,n);
//         cout << i << " ";
//     }
// }

// int main(){
//     int n,i=1;
//     cin >> n;
//     print(i,n);
// }



// sum of first n numbers using parameter
 
// int summ(int i,int sum){
//     if(i<1) {
//         cout << sum;
//         return sum;
//     }
//     summ(i-1,sum+i);
// }

// int main(){
//     int n,i,sum;
//     cin >>n;
//     summ(n,0);
// }


//  sum of first n numbers using functional

// int f(int n){
//     if(n==0) return 0;
//     else{
//         return n+f(n-1);
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << f(n);
// }


// factorial of n

// int f(int n){
//     if(n==1) return 1;
//     else {
//         return n*f(n-1);
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << f(n);
// }


// Reverse an array using recursion  
// using two pointer

// void f(int a[],int l,int r){
//     if(l>=r) return;
//     swap(a[l],a[r]);
//     f(a,l+1,r-1); 
// }

// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin >> a[i];
//     }
//     f(a,0,n-1);
//     for(auto it: a){
//         cout << it << " ";
//     }
// }

// using the single pointer

// void f(int i,int n,int a[]){
//     if(i>=n/2) return;
//     swap(a[i],a[n-i-1]);
//     f(i+1,n,a);
// }

// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin >> a[i];
//     }
//     f(0,n,a);
//     for(auto it: a){
//         cout << it << " ";
//     }
// }




// check if a string is palindrome or not

// bool f(int i,string s){
//     if(i>=s.size()/2) return true;          //sab match ho gye   //agar sari index check ho jati hai aur true hoti hai to vo is base pe pahuch hi jaygei
//     if(s[i]!=s[s.size()-i-1]) return false;  
//     return f(i+1,s);
// }

// int main(){
//     string s;
//     cin >> s;
//     if(f(0,s)) cout << "palindrome";
//     else{
//         cout << "Not plaindrome";
//     }
// }



// Alag-alag conditions jo saath me bhi true ho sakti hain → alag-alag if likho (bina else).
// Ek hi choice chalni chahiye (category/grade/type) → if ... else if ... else chain use karo.



// Multiple recursion calls

// fibonacii 

// int fibo(int n){
//     if(n<=1) return n;
//     return fibo(n-1)+fibo(n-2);
// }
 
// int main(){
//     int n;                       
//     cin >> n;
//     cout << fibo(n);
// }

