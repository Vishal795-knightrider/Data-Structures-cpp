#include <bits/stdc++.h>
using namespace std;

// set of code which perform task for us 
// modularise code 
// increase readability
// use same code multiple times
// types:f  void  = does not return(it will do something but not give me something)
//         return 
//         parameterised
//         non parameterised


// 1. void printname(string name){
//     cout << "Hey  " << name << "\n";
// }

// int main(){
//  string name;
//  cout << "Enter your name : ";
//  cin >> name;
//  printname(name);

//  string name2;
//  cout << "Enter your name : ";
//  cin >> name2;
//  printname(name2);

// }

// 2. // int sum(int a,int b){
//     return a+b;
// }

// int main(){
//     int a,b;
//     cin >> a >> b;
//     cout << "sum is:" << sum(a,b);
// }



int maxx(int num1,int num2){
    // 5>=6  conditon false ,then if ke bahar, fn ka return type int and then it will show garbage
    if(num1>=num2){
        return num1;
    }
    // looking for a return line then we have return type here so that garbage value not show
    return num2;
}

int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int maxs=maxx(num1,num2);
    cout << maxs;
    return 0;
}