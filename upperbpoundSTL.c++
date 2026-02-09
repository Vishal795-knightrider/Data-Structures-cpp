#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin >> a[i];
//     }
//     sort(a,a+n);
//     for(int i=0;i<n;i++){
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     // int *ptr=lower_bound(a,a+n,6);      //log(n) n is the sze of aray
//     int *ptr=upper_bound(a,a+n,6);       //log(n) n is the sze of aray
//     cout << *ptr << endl;
// }





int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i]; 
    }
    sort(v.begin(),v.end());
    for(auto it: v){
        cout << it <<  " ";
    }
    cout << endl;
    auto it =upper_bound(v.begin(),v.end(),26);
    if(it==v.end()) {
        cout <<  "Not found";
        return 0;
    }
    cout << *it;
}