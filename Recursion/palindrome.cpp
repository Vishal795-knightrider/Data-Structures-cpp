#include <bits/stdc++.h>
using namespace std;

bool check(int i,string str){
    int n=str.size();
    if(i>=n/2) return true;
    if(str[i]!=str[n-i-1]) return false;    //tgis check again n again but never execute therefore i >= n/2 .....
    return check(i+1,str);                   //whatever check(i+1,str); says vhi hum return kr denge 
}

int main(){
    string str="MADsM";
    cout << check(0,str);
}