#include<bits/stdc++.h>
using namespace std;

// we have to repeat the same code of line

int main(){
    for(int i=0;i<=10;i++){
        cout << "hey" << endl;
    }
    // showing red line bcoz of scope of a variable in below line
    // cout <<  i;

    int i=1;
    while(i<=5){
        cout << "hey" << endl;
        i=i+1;
    }

}