//-------------->>>>>>>>>fruit into baskets
// You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array fruits where fruits[i] is the type of fruit the ith tree produces.

// You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:

// You only have two baskets, and each basket can only hold a single type of fruit. There is no limit on the amount of fruit each basket can hold.
// Starting from any tree of your choice, you must pick exactly one fruit from every tree (including the start tree) while moving to the right. The picked fruits must fit in one of your baskets.
// Once you reach a tree with fruit that cannot fit in your baskets, you must stop.
// Given the integer array fruits, return the maximum number of fruits you can pick.

// intuion: we can consider this as max length subaary with at most 2 types of numbers
// Because:
// Basket 1 → one fruit type
// Basket 2 → second fruit type
// Isliye current window mein maximum 2 different numbers allowed hain.


#include <bits/stdc++.h>
using namespace std;
//brute force

// int main(){
//   int fruits[]={3,3,3,1,2,1,1,2,3,3,4};
//   int n=sizeof(fruits)/sizeof(fruits[0]);

 
//   int maxlen=0; 
//   for(int i=0;i<n;i++){
//     set<int> st;             //particular window mein maximum 2 different numbers allowed hain.
//     for(int j=i;j<n;j++){
//       st.insert(fruits[j]);
//       if(st.size()<=2){
//         maxlen=max(maxlen,j-i+1);     //Agar basket mein fit ho sakta hai(yani basket 2 type ke fruit), window valid hai.
//       }
//       else break;   //Agar set size 3 ho gayi, toh current starting point se aage koi bhi larger window valid nahi hogi.
//     }
//   }
//   cout << "max no. of fruits are: " << maxlen;
// }


//