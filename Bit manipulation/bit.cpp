#include <bits/stdc++.h>
using namespace std;

//1. convert deci to binary

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


//2.  convert bin to decimal

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

//3. SWAP 2 NUMBERS

// int main(){
//     int a,b; cin >> a >> b;
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     cout << a << " " << b;
// }


//4. IF THE Ith BIT IS SET OR NOT

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

//5.  SET THE Ith BIT

// int main(){
//     int n; cin >> n;
//     int i; cin >> i;
//     cout << (n|(1<<i));
// }

//6.   CLEAR THE Ith BIT

// int main(){
//     int n; cin >> n;
//     int i; cin >> i;
//     cout <<( n&( ~(1<<i)));
// }

//7.  TOGGLE THE Ith BIT  (0 to 1 n 1 to 0)
// int main(){
//     int n; cin >> n;
//     int i; cin >> i;
//     cout << (n^(1<<i));
// }


//8.   REMOVE LAST SET BIT (RIGHTMOST)

// int main(){
//     int n; cin >> n;
//     cout << (n&(n-1));
// }

//9.    CHECK IF NUMBER IS A POWER OF 2
// int main(){
//     int n; cin >> n;
//     if ((n & n-1)==0) cout << "true";
//     else cout << "false";
// }

//10.   COUNT THE NO. OF SET BITS

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


//11.   MINIMUM BIT FLIPS TO CONVERT A NUMBER

// int main(){
//     int n,m;
//     cin >> n >> m;
//     int ans=n^m;
//     int cnt=0;
//     for(int i=0;i<=31;i++){
//         if(ans&(1<<i)) cnt++;
//     }
//     cout << cnt;
// }


//12.   POWERSET (print all subsets)

// int main(){
//     vector<int> nums={1,2,3};
//     int n=nums.size();
//     vector<vector<int>> ans;
//     int totsub=1<<n;                     //no of subsets(2^n)
//     for(int num=0;num<totsub;num++){     //num goes 0 1 2 3 4 5 6 7  (Each num represents one subset.)
//         vector<int> ok;
//         for(int i=0;i<n;i++){               //i=0,1,2     which connected to nums[0] nums[1] nums[2]
//             if(num&(1<<i)) ok.push_back(nums[i]);
//         }
//         ans.push_back(ok);
//     }
    

    // for (auto list : ans) {
    //     cout << "{ ";
    //     for (int x : list) {
    //         cout << x << " ";
    //     }

    //     cout << "}" << endl;
    // }

// }
// The most important thing to remember
// Think of every num as a take/not-take mask:

// 101
// │││
// ││└── nums[0] → TAKE
// │└─── nums[1] → DON'T TAKE
// └──── nums[2] → TAKE

// So bit = 1 → take, bit = 0 → don't take.
// This is basically the take/not-take approach represented using bits.
// ----------------------------------||----------------------------------
// For num = 5:
// num       = 101
// 1 << 0    = 001   → 101 & 001 = 001 → take nums[0] = 1

// 1 << 1    = 010   → 101 & 010 = 000 → don't take nums[1]

// 1 << 2    = 100   → 101 & 100 = 100 → take nums[2] = 3

// Therefore:
// num = 5 → {1, 3}

//13. SINGLE NUMBER

// int main(){
//     int n; cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int xorr=0;
//     for(int i=0;i<n;i++){
//         xorr=xorr^arr[i];
//     }
//     cout << xorr;
// }


