#include <bits/stdc++.h>
using namespace std;

// int main(){
//     cout << "Enter size of the array:";
//     int n;
//     cin >> n;
//     int arr[n];
//     cout << "Enter array elements:" << endl;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     //precompute
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]] +=1;
//     }

//     cout << "Enter queryes i.e how much numbers which have to show occurence:";
//     int q;
//     cin >> q;
//     while(q--){
//         int number;
//         cin >> number;
//         //fetch
//         cout  << hash[number] << endl;
//     }
//     return 0;   
// }


// character hashing  s="hxsdhxhdsbad"; 
// code if it just has lower case letters

// int main(){
//     string s;
//     cout << "Enter the string:";
//     cin >> s;

//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']+=1;  // minus(-) operates between int.
//     }

//     int q;
//     cout << "number jitne character ki occurence pta krni hai:";
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;
//         cout << hash[c-'a'] << endl;
//     }
// }


// // // if just also upper case and all charcaters

// int main(){
//     string s;
//     cout << "Enter the string:";
//     cin >> s;

//     int hash[256]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]+=1;  // minus(-) operates between int.
//     }

//     int q;
//     cout << "number jitne character ki occurence pta krni hai:";
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;
//         cout << hash[c] << endl;
//     }
// }



//number hashing using map

// int main(){
//     int n;
//     cin >> n;
//     int ar[n];
//     for(int i=0;i<n;i++){
//         cin >> ar[i];
//     }

//     unordered_map<int,int> mp;
//     for(int i=0;i<n;i++){
//         mp[ar[i]]+=1;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         int number;
//         cin >> number;
//         cout << mp[number] << endl;
//     }
// }




