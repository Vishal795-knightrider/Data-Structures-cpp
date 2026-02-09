#include <bits/stdc++.h>
using namespace std;



// int main(){
//     set<string> s;
//     s.insert("hey");
//     s.insert("who");
//     s.insert("Are");
//     s.insert("you");
//     auto it=s.find("hey");
//     cout << *it << endl;

//     s.erase("hey");

//     for(auto it: s){
//         cout << it << endl;
//     }
// }


// given N strings print unique string
// in lexiographical order N <= 10^5
// |S|<= 10000

// int main(){
//     set<string> s;
//     int N;
//     cin >> N;
//     for(int i=0;i<N;i++){
//         string p;
//         cin >> p;
//         s.insert(p);
//     }

//     cout << "the strings are: " << endl;
//     for(auto it:s){
//         cout << it << endl;
//     }
// }


//unordered set
// given n strings and q queries
// in each query you are given a string
// print yes if string is print els no 

// int main(){
//     unordered_set<string> s;
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         string str;
//         cin >> str;
//         s.insert(str);    //o(1)
//     }
//     int q;
//     cin >> q;
//     while(q--){
//         string p;
//         cin >> p;
//         if(s.find(p)==s.end()){
//             cout << "no" << endl;
//         }
//         else {
//             cout << "Yes";
//         }
//     }
// }


// same multiple values allowd
// int main(){
//     multiset<string> s;
//     s.insert("hey");
//     s.insert("hope");
//     s.insert("we");
//     s.insert("hell");
//     s.insert("we");
//     auto it=s.find("we");
//     if(it!=s.end()){
//         // s.erase(it);
//     }
//     s.erase("we");  //in erase if we provide itertor it will
//                     //  delet the value at itrator if we pass 
//                     //  the the value in erase it will dleete 
//                     //  all the occurence  
//     for(auto it: s){
//         cout << it << end_l;
//     }
// }



// Problem:
// Our Monk loves candy!
// While taking a stroll in the park, he stumbled upon N Bags with candies. The i'th of these bags contains Ai candies.
// He picks up a bag, eats all the candies in it and drops it on the ground. But as soon as he drops the bag, the number of candies in the bag increases magically! Say the bag that used to contain X candies (before eating), now contains [X/2] candies! ,where [x] is the greatest integer less than x (Greatest Integer Function).
// Amazed by the magical spell, Monk can now have a lot more candies! But he has to return home in K minutes. In a single minute,Monk can consume all the candies in a single bag, regardless of the number of candies in it.
// Find the maximum number of candies that Monk can consume.

// Input:
// First line contains an integer T. T test cases follow.
// First line of each test case contains two space-separated integers N and K.
// Second line of each test case contains N space-separated integers,the number of candies in the bags.

// Output:
// Print the answer to each test case in a new line.

// Constraints:
// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 10^5
// 0 ≤ K ≤ 10^5
// 0 ≤ Ai ≤ 10^10

// Sample Input
// 1
// 5 3
// 2 1 7 4 2
// Sample Output
// 14


// Explanation
// The state of bags is:
// 2 1 7 4 2
// Monk eats all candies from Third bag (7). The state of bags becomes:
// 2 1 3 4 2
// Monk eats all candies from Fourth bag (4). The state of bags becomes:
// 2 1 3 2 2
// Monk eats all candies from Third bag (3). The state of bags becomes:
// 2 1 1 2 2
// Hence, the Monk eats 7+4+3= 14 


// Answer: agar usko max. candies khani hai to jis bag me sabse jyada 
//          candy hau har baar pehle vahi uthayega


 int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cout << "Enter number of candies";
        cin >> n;
        cout << "Enter number of minutes";
        cin >> k;
        multiset<long long> bags;
        for(int i=0;i<n;i++){
            long long candy_cnt;
            cin >> candy_cnt;
            bags.insert(candy_cnt);
        }
        long long total_candy_cnt=0;
        for(int i=0;i<k;i++){
            auto it=(--bags.end());
            long long last_max_candy = *(it);
            total_candy_cnt=total_candy_cnt+last_max_candy;
            bags.erase(it);
            bags.insert(last_max_candy/2);
        }
        cout << total_candy_cnt << endl;
    }
}
 