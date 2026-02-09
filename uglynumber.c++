#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p[]={2,3,5};
    for(auto it:p){
        while(n%it==0){
            n=n/it;
        }
    }
    if(n==1) cout << "ugly";
    else cout << "not ugly";
}