#include <bits/stdc++.h>
using namespace std;

// pass by value 

void dosomething(string s){
    s[0]='V';
    cout << s << endl;
    }
    
    int main(){
        string s;
        cout << "Enter string : ";
        cin >> s;
        dosomething(s);
        // this upper fn send the copy to the fn
        cout << s;
    }

    // pass by ref
// void dosomething(string &s){
//     s[0]='V';
//     cout << s << endl;
//     }
    
//     int main(){
//         string s;
//         cout << "Enter string : ";
//         cin >> s;
//         dosomething(s);
//     cout << s;
//     }


// arrays always pass through as refrence
    
    