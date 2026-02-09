#include <bits/stdc++.h>
using namespace std;

// extraction of digits
// int main(){
//     int n;
//     cin >> n;
//     while(n>0){
//         int last_digit=n%10;
//         n=n/10;
//         cout << last_digit << endl;
//     }
// }


// count digit in a number
// int main(){
    // int n;
    // cin >> n;
    // int count =0;
    // while(n>0){
    //     n=n/10;
    //     count++;
    // }
    // int count=(int)(log10(n))+1;      //OR
    // cout << "Number of digits in a number :" << count;
// }




// int main(){
//     int n;
//     cin >> n;
//     int rev_no=0;
//     while(n>0){
//         int last_digit=n%10;
//         rev_no=(rev_no*10)+last_digit;
//         n=n/10;
//     }
//     cout << "Reverse of a number is:" << rev_no;
// }





// int power(int base,int exp){
//     int result=1;
//     for(int i=0;i<exp;i++){
//         result *=base;
//     }
//     return result;
// }

// int main(){
//     int n;
//     int sum=0;
//     cin >> n;
//     int dup=n;
//     int cnt_digit=(int)(log10(n))+1;
//     while(n>0){
//         int last_digit=n%10;
//         sum=sum+power(last_digit,cnt_digit);
//         n=n/10;
//     }
//     if(sum==dup){
//         cout << "Armstrong";
//     }
//     else{
//         cout << "Not Armstrong";
//     }
// }



// int main(){
//     int n;
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout << i << " ";
//         }
//     }
// }

// OR


// NUMBER OF FACTORS
// int main(){
//     int n;
//     cin >> n;
//     vector<int> v;
//     for(int i=1;i<=sqrt(n);i++){   //in place of i<=sqrt(n)we can also write i*i<=n
//         if(n%i==0){
//             v.push_back(i);
//             if(n/i!=i){
//                 v.push_back(n/i);
//             }
//         }
//     }
//     sort(v.begin(),v.end());
//     for(auto it: v){
//         cout << it << " ";
//     }
// }


// PRIME NUMBER

// int main(){
//     int n;
//     cin >> n;
//     int count=0;
//     for(int i=1;i*i<=n;i++){    //o(srt(n))
//         if(n%i==0){
//             count++;
//             if(n/i!=i){
//                 count++;
//             }
//         }
//     }
//     if(count ==2){
//         cout << "Number is Prime";
//     }
//     else {
//         cout << "Not prime";
//     }
// }





//GCD or HCF 

// int main(){
//     int n1,n2,gcd=1;
//     cin >> n1 >> n2;
//     for(int i=1;i<=min(n1,n2);i++){
//         if(n1%i==0 && n2%i==0){
//             gcd=i;
//         }
//     }
//     cout << "GCD is:" << gcd;
// }


//Euclideon algo
// int main(){
//     int a,b;
//     cin >> a >> b;
//     while(a>0 && b>0){
//         if(a>b) a=a%b;
//         else b=b%a;
//     }
//     if(a==0) cout << b << " is gcd";
//     else cout << a << " is gcd";
// }
 
  















 

