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
 //below one not for negative integers
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

//13. SINGLE NUMBER                (numbers appearing twice except one )

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



//14. SINGLE NUMBER 2   (numbers appearing thrice except one )

// int main(){
//     int n; cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int ans=0;                      //to store that sinle appearing no.
//     for(int bitidx=0;bitidx<32;bitidx++){
//         int cnt=0;
//         for(int i=0;i<n;i++){             
//             if(arr[i]&(1<<bitidx)) cnt++;        //check if bit is 1
//         }
//         if(cnt%3==1) ans=(ans| (1<<bitidx));         //set the bit in ans
//     }
//     cout << ans;
// }


// 2nd method

// int helper(int arr[],int n){
//     sort(arr,arr+n);
//     for(int i=1;i<n;i+=3){
//         if(arr[i]!=arr[i-1]) return arr[i-1];
//     }
//     return arr[n-1];           //test case in which the element appearing one is at last position
// }
// int main(){
//     int n; cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << helper(arr,n);
// }


//3rd method (using buckets)

// int main(){
//     int n; cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int ones=0;
//     int twos=0;
//     for(int i = 0;i<n;i++){
//         ones=(ones^arr[i])&(~twos);       //move x to ones, remove bits already in twos
//         twos=(twos^arr[i])&(~ones);       //move x to twos, remove bits already in ones
//     }
//     cout <<  ones;       //unique no.
// }


//15. Single number 3

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
//     int rightmost=(xorr & (xorr-1)) ^ xorr;
//     int b1=0; int b2=0;
//     for(int i=0;i<n;i++){
//         if((rightmost & arr[i])!=0) b1=b1^arr[i];
//         else b2=b2^arr[i];
//     }
//     cout << "{" << b1 << " " << b2 << "}";
// }


// 201
// 260
// 371
// 137


//16.XOR of numbers in a given range n=4 we have to find 1^2^3^4

// int main(){
//     int n; cin >> n;
//     if(n%4==1) cout << 1;
//     else if(n%4==2) cout << n+1;
//     else if(n%4==3) cout << 0;
//     else cout << n;
// }

//17.  if it in a give range (L-R)  liek (4-7) we have to find 4^5^6^7

// int solve(int n){
//     if(n%4==1) return 1;
//     else if(n%4==2) return n+1;
//     else if(n%4==3) return 0;
//     else return n;
// }

// int main(){
//     int l,r;
//     cin >> l >> r;
//     int a=solve(l-1);
//     int b=solve(r);
//     int ans=a^b;
//     cout << ans;
// }


// 18. Divide two integers
// int main(){
//     int dividend, divisor;
//     cin >> dividend >> divisor;

//     if(dividend == divisor){
//         cout << 1;
//         return 0;
//     }
//     bool sign = true;
//     if(dividend < 0 && divisor >= 0) sign = false;
//     if(dividend >= 0 && divisor < 0) sign = false;

//     long long numerator = abs((long long)dividend);
//     long long denominator = abs((long long)divisor);

//     long long ans = 0;
//     while(numerator >= denominator){
//         int cnt = 0;
//         while(numerator >= (denominator << (cnt + 1))){
//             cnt++;
//         }
//         ans += (1 << cnt);
//         numerator = numerator - (denominator << cnt);
//     }

//     if(ans >= (1 << 31) && sign == true){
//         cout << INT_MAX;
//         return 0;
//     }
//     if(ans >= (1 << 31) && sign == false){
//         cout << INT_MIN;
//         return 0;
//     }

//     if(sign)
//         cout << ans;
//     else
//         cout << (-1 * ans);
//     return 0;
// }

// Overall thinking
// 43 / 5

// 43
// ↓
// Find biggest 5 × 2^cnt that fits
// ↓
// 5 × 8 = 40
// ↓
// answer += 8
// ↓
// 43 - 40 = 3
// ↓
// 3 < 5
// ↓
// STOP
// ↓
// answer = 8


