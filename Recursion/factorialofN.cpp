#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1 || n==0) return 1;                //o factorial bhi 1 hota hai0
    return n*fact(n-1);
}

int main(){
    int n; cin >> n;
    cout << fact(n);
}