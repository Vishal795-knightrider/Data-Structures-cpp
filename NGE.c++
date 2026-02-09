#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int a[]={4,5,2,25,7,8};
//     for(int i=0;i<6;i++){
//         int next=-1;
//         for(int j=i+1;j<6;j++){
//             if(a[j]>a[i]){
//             next=a[j];
//             break;
//             }
//         }
//         cout << a[i] << " ka greater hai " << next << endl;
//     }
// }
 

//  using stack we can done this o(n);

// hmne jo isme stack bnaya hai vo index ka hai

// vector<int> NGE(vector<int> v){
//     vector<int> nge(v.size());
//     stack<int> st;
//     for(int i=0;i<v.size();i++){
//         while(!st.empty()&& v[i]>v[st.top()]){
//             nge[st.top()]=i;
//             st.pop();
//         }
//         st.push(i);
//     }
//     while(!st.empty()){
//         nge[st.top()]=-1;
//         st.pop();
//     }
//     return nge;
// }


//  int main(){
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin >> v[i];
//     }
//     vector<int> nge=NGE(v);
//     for(int i=0;i<n;i++){
//         cout << v[i] << " " << (nge[i]==-1 ? -1 : v[nge[i]]) << endl;
//     }
//    }