#include <bits/stdc++.h>
using namespace std;

// int main(){
//     vector<int> v={1,2,3,4,5};
//     // for(int i=0;i<v.size();i++){
//     //     cout << v[i] << " " << endl;
//     // }
//     vector<int> ::iterator it;
//     for(it=v.begin();it!=v.end();it++){
//         cout << *(it) << endl;
//     }
// }


// int main(){
//     vector<pair<int,int>> v={{1,2},{3,4},{5,6}};
//     vector<pair<int,int>> :: iterator it;
//     for(it=v.begin();it!=v.end();it++){
//         cout << (*it).first << " " << (*it).second << " " << endl;
//     }
// }

// (*it).first <=> (it->first)




// int main(){
//     vector<int> v={1,2,3,4,5};
//     for(int value: v){
//         cout << value << " ";
//     }
//     cout << endl;
// }






int main(){
    vector<pair<int,int>> v_p={{1,2},{3,4},{6,7}};
    for(auto it:v_p){
        cout << it.first << " " << it.second << endl;
    }
}