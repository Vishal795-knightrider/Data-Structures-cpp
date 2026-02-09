#include <bits/stdc++.h>
using namespace std;

// stl is divided into four parts 
// algorithms
// containers
// Functions
// iteratos

// pairs is a part of utility library   , pair can be treated as a datatype

// void explainpair(){
    //1. pair<int,int> p ={1,3};

    // cout << p.first << " " << p.second;

    //2. pair<int,pair<int,int>> p={1,{3,4}};
     
    // cout << p.first << " " << p.second.first << " " << p.second.second;

    //3.pair<int,int> arr[]={ {1,2},{3,4},{5,6}};

    //     cout << arr[1].second << endl;
    //     cout << arr[2].first;
    // }




// vector is container which is dynamic in nature can always increase size whenever we wish to



// void explainVector(){
    // vector<int> v;
    // // v.push_back(1);
    // v.emplace_back(2);

    // vector<pair<int ,int>> vec;

    // vec.push_back({1,2});
    // vec.emplace_back(1,2);

    // vector<int>  v(5,100);
    // // above means-{100,100,100,100,100}
    // vector<int>v2(v);
    // vector<int> v(5);    
    // above means- {0,0,0,0,0}
    // vector<int> v={100,200,300,400,500};
    // cout << v.back() << " " << endl;   print the last element
 
    // vector<int>::iterator it = v.begin();
    // it++;
    // cout << *(it) << " ";


    // cout << v.at(0);

    // v.end() poit the right after element of the elemnt 
    // vector<int>:: iterator it=v.end();
    // it--;
    // cout << *(it) << " ";



    // for(vector<int>:: iterator it=v.begin();it!=v.end();it++){
    //     cout << *(it) << " ";
    // }

    // for(auto it=v.begin();it!=v.end();it++){
    //     cout << *(it) << " ";
    // }

    // for(auto it: v){
    //     cout << it <<  " ";     
    // }


    // v.erase(v.begin()+1);
    // for(auto it: v){
    //     cout << it << " ";
    // }

    // v.erase(v.begin()+1,v.begin()+4);
    // for(auto it: v){
    //     cout << it << " ";
    // }

    // v.insert(v.begin(),50);
    // for(auto it: v){
    //     cout << it << " ";
    // }

    // v.insert(v.begin(),3,20);
    // for(auto it:v){
    //     cout  << it << " ";
    // }

    // vector<int> copy(2,70);
    // v.insert(v.begin(),copy.begin(),copy.end());
    // for(auto it : v){
    //     cout  << it << " ";
    // }

    // cout << v.size() << endl;
    // v.pop_back();
    // for(auto  it : v){
    //     cout << it << " ";
    // }


    // vector<int> v1={10,20};
    // vector<int> v2={70,80};
    // v1.swap(v2);
    // for(auto it: v1){
    //     cout << it << " ";
    // }
    // cout << endl;
    // for(auto it: v2){
    //     cout << it << " ";
    // }

//     v.clear();
//     cout << v.empty();

// }



// int main(){
//     explainVector();
//     return 0;
// }



// void explainlist(){
//     list<int> ls;
//     ls.push_back(2);
//     ls.emplace_back(4);

//     ls.push_front(5);
//     ls.emplace_front();
//     for(auto it: ls){
//         cout << it << " ";
//     }
// }


// int main(){
//     explainlist();
//     return 0;
// }







// void explainDeque(){
//     deque<int> dq;
//     dq.push_back(1);
//     dq.emplace_back(2);
//     dq.push_front(3);
//     dq.emplace_front(4);
//     for(auto it:dq){
//         cout << it << " ";
//     }

//     cout << endl;

//     dq.pop_back();
//     dq.pop_front();
//     for(auto it:dq){
//         cout << it << " ";
//     }

//     cout << endl;

//     cout << dq.back() << " ";
//     cout << dq.front();

//     // rest are same as vector
// }


// int main(){
//     explainDeque();
//     return 0;
// }




// last in out  first
// void explainStack(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.emplace(5);

//     cout << st.top() << endl;
//     st.pop();
//     cout << st.top() << endl;
//     cout << st.size() << endl;
//     cout << st.empty();

//     stack<int> st1,st2;
//     st1.swap(st2);

// }


// int main(){
//     explainStack();
//     return 0;
// }



// first in first out
// void explainQueue(){      
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.emplace(4);

//     q.back() += 5;
//     cout << q.back() << endl;
//     cout << q.front() << endl;

//     q.pop();
//     cout << q.front();

//     // size swap empty same as stack
// }


// int main(){
//     explainQueue();
//     return 0;
// }


// largest element  at the top
// void explainPQ(){
    // priority_queue<int>pq;

    // pq.push(1);
    // pq.push(10);
    // pq.push(3);
    // pq.push(8);
    // pq.emplace(12);

    // cout << pq.top() << endl;
    // pq.pop();

    // cout << pq.top() << endl;

    // cout << pq.size() << endl;
    // cout << pq.empty();
    // priority_queue<int> pq1;
    // pq.swap(pq1);


    // minimum priority queue
//     priority_queue<int,vector<int>,greater<int>> pqmin;
//     pqmin.push(5);
//     pqmin.push(1);
//     pqmin.push(9);
//     pqmin.emplace(10);

//     cout << pqmin.top();

// }


// int main(){
//     explainPQ();
// }




// store everything in a sorted and unique order
// void explainSet(){
//     set<int> st;
//     st.insert(1);
//     st.emplace(2);
//     st.insert(2);
//     st.insert(3); 

//     // it will return iterator which points to this 3(iterator point to the address)  {1,2,3}
//     auto it=st.find(3);


//     // if elemnt is not in the set then it will return  st.end()
//     auto it1 =st.find(5);

//     // simply delte 5 ,mintain the sorted order;
//     st.erase(5); 

//     int cnt=st.count(1);
//     cout << cnt << endl;
//     st.erase(it);
    //    erase ke andar ya to elemnt ya address to be deleted




//     {1,2,3,4,5}
//     auto it1=st.find(2);
//     auto it2=st.find(4);
//     st.erase(it1,it2);  after erase {1,4,5}

     

    //   auto it =st.lower_bound(2);
    //   auto it =st.upper_bound(3);
    
    // }
 

// int main(){
//     explainSet();
//     return 0;
// }



// only sorted but not unique
// void explainMultiSet(){
//     multiset<int>ms;
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(1);

//     ms.erase(1);  
//     // if you wil earse element 1 the all the acuurence of 1 will be dleted but if you pass the iterator then one onw will  be dleted 

//     int cnt =ms.count(1);

//     // only a sngle ne erased;
//     ms.erase(ms.find(1));


//     ms.erase(ms.find(1),ms.find(4));
// }




// // unique but not sorted
// void explainUset(){
//     unordered_set<int> st; 
// }


// // unique but in sorted order
// void explainMap(){
//     map<int,int> mp;
//     // map<pair<int,int>,int> mp;

//     // mp[1]=2;
//     // mp.emplace({1,3});
//     // mp.insert({2,4});

//     // mp[{1,2}]=10;

//     for(auto it: mp){
//         cout << it.first << " " << it.second << endl;
//     }

// }


// duplicate keys in a sorted order

// void explainmap(){
// everything same as map only it can store multiple keys
// only mp[key] cnnot be used here
// }


// unique not in sorted order

// void explainUnorderedMap(){
// same as set and unorderd_Set differnece.
// }




// bool comp(pair<int,int> p1,pair<int,int> p2){
//     if(p1.first<p2.second) return true;
//     if(p1.second>p2.second) return false;

//     if(p1.first>p2.first) return true;
//     return false;
// }

// void explainExtra(){

//     sort(a,a+n);


//     if vector
//     sort(v.begin(),v.end());

//     sort(a+2,a+5);

//     sort in descending order
//     sort(a,a+n,greater<int>);



//     pair<int,int> ar[]={{1,2},{2,1},{4,1}};
    // sort it according to the second elemnt if the second is same 
    // sort it according ti the first elemt but in descenidng order



    // returns the number of 1-bits in the binary representation of number
    // int num;
    // cin >> num;
    // int cnt = __builtin_popcount(num);

    // cout << cnt;



    // long long num=165786578786;
    // int cnt =__builtin_popcountll(num);
    // cout << cnt;


//     string s="123";
//     sort(s.begin(),s.end());

//     do{
//         cout << s << endl;
//     }
//     while(next_permutation(s.begin(),s.end()));


//     int maxi=*max_element(a,a+n);  
//     // return max element
// }



// int main(){
//     explainExtra();
//     return 0;
// }
 

