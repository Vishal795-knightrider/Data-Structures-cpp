#include <bits/stdc++.h>
using namespace std;




int main(){
    // similar data type, entire thing stored in a memory location, 0 index stored in a particula23r memory then after next indices is right after the 0 index
    int arr[5];
    cin >> arr[0] >> arr[1];
    cout << arr[0];

    int ar[3][5];
//     3 five boxes hai 
//     Visually, it’s like:

//        Column 0	Column 1	Column 2	Column 3	Column 4
// Row 1  arr[0][0]	arr[0][1]	arr[0][2]	arr[0][3]	arr[0][4]
// Row 2  arr[1][0]	arr[1][1]	arr[1][2]	arr[1][3]	arr[1][4]
// Row 3  arr[2][0]	arr[2][1]	arr[2][2]	arr[2][3]	arr[2][4]
}

int main(){
    // string also store every character in form of indexes
    string s = "Vishal_Kahsyap";
    int len=s.size();
    cout << s[len-1];
} 