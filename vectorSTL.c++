#include <bits/stdc++.h>
using namespace std;


void printVec(vector<int> v){
    for(int i=0;i<v.size();i++){
    //     v.size -> 0(1)
    cout << v[i] << " " << endl;
    }
}


// int main(){
//     // int a[10];   10 memory blocks fixed
//     vector<int> v; 
//     v.push_back(7);
//     v.push_back(8);
//     vector<int> v2=v; 
//     v2.push_back(9);
//     printVec(v);
//     printVec(v2);
// }


// int main(){
//     vector<pair<int,int>>v;
//     int n;
//     cout << "enter number of elements";
//     cin >> n;
//     for(int i=0;i<n;i++){
//         int x,y;
//         cin >> x >> y;
//         v.push_back({x,y});
//     }
//     printVec(v);
// }


// int main(){
//     int N;
//     cout << "Enter number of vectors: ";
//     cin >> N;
//     vector<int> v[N];
//     // vector<int> v[10];
//     // // ye 10 vector bn chuke jinke hai v[0] ek vector hai 
//     // v[2] ek vector hai jinka size 0 hai 
//     for(int i=0;i<N;i++){
//         int n;
//         cout << "Enter no. of vectors in " << i << "th vector" << endl;
//         cin >> n;
//         for(int j=0;j<n;j++){
//             int x;
//             cin >> x;
//             v[i].push_back(x);
//             // v vectors ka array hai aur v[i] ek vector hai aur vo bhi ith vector
//         }
//     }
//     for(int i=0;i<N;i++){
//     cout << "element of the " << i << "th vector are: " << endl;
//         printVec(v[i]);
//     }
// }

// in above case its like a 2d array in which
// rows are fixed i.e. N but columns are varying i.e. n


int main(){
    int N;
    cin >> N;
    vector<vector<int>> v;
    for(int i=0;i<N;i++){
        int n;
        cin >> n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        printVec(v[i]);
    }
}





