#include <bits/stdc++.h>
using namespace std;

// bool should_i_swap(int a,int b){
//     if(a>b) return true;
//     else false;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin >> v[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(should_i_swap(v[i],v[j])){       
//                 swap(v[i],v[j]); 
//             }
//         }
//     }
//     for(auto it:  v){
//         cout << it << " ";
//     }
// }




bool should_i_swap(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first){
        if(a.first > b.first){
            return true;
        }
        else {return false;}
    }
    else{
        if(a.second<b.second){
            return true;
        }
        else{return false;}
    }
}


int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(should_i_swap(v[i],v[j])){       
                swap(v[i],v[j]); 
            }
        }
    }
    for(auto it:  v){
        cout << it.first << " " << it.second << endl;
    }
}