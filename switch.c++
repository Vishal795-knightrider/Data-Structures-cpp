#include <bits/stdc++.h>
using namespace std;

int main(){
    int day_no;
    cout << "Enter day number : ";
    cin >> day_no;
    switch(day_no){
        case 1: cout << "Monday";
        break;
        case 2: cout << "Tuesday";
        break;
        case 3: cout << "Wednesday";
        break;
        case 4: cout << "Thursday";
        break;
        case 5: cout << "Friday";
        break;
        case 6: cout << "saturday";
        break;
        case 7: cout << "Sunday";
        break;
        default : cout << "Invalid day_no";
    }

}