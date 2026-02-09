#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin >> v[i];
//     }
//     int min = *min_element(v.begin(),v.end());    //o(n)
//     cout << min << endl;
//     int max=*max_element(v.begin(),v.end());   //o(n)
//     cout << max << endl;
//     int sum =accumulate(v.begin(),v.end(),0);    //o(n)
//     cout  << sum << endl;
//     int ct=count(v.begin(),v.end(),2);
//     cout << ct << endl;
//     auto it=find(v.begin(),v.end(),10);
//     if(it!=v.end()){
//         cout << *it << endl;
//     }else {
//         cout << "element not exist";
//     }
//     reverse(v.begin()+2,v.end());
//     for(auto val: v){
//         cout << val << " ";
//     }
//     cout << endl;
//     string s="bhfjcndjifcdd";
//     reverse(s.begin(),s.end());
//     cout << s << endl;
// }


 

// lamda fn
// int main(){
//     auto sum=[](int x,int y){return x+y;};
//     cout << sum(2,4);
// }



int main(){
    vector<int> v={-2,-2,-4,-6};
    cout << all_of(v.begin(),v.end(),[](int x){return x>0;}) << endl;
    cout << any_of(v.begin(),v.end(),[](int x){return x>0;}) << endl;
    cout << none_of(v.begin(),v.end(),[](int x){return x>0;});

}

