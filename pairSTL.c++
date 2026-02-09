#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string> p;
    // p=make_pair(2,"Vishal");
    p={2,"Vishal"}; 
    // pair<int,string> p1=p; here a copy of p go so it print 2
    pair<int,string> &p1=p;  
    // Now p1 is just another name for p. both point to same object in memory
    p1.first=3;
    cout << p.first << " " << p.second << endl;
    pair<int,int> ar[3];
    ar[0]={1,2};
    ar[1]={2,3};
    ar[2]={3,4};
    for(int i=0;i<3;i++){
        cout << ar[i].first << " " << ar[i].second << endl;
    }
}