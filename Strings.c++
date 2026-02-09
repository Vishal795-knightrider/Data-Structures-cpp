#include <bits/stdc++.h>
using namespace std;

//diff btw char array and string
// char toLowerCase(char ch){
//     if(ch>='a' && ch<='z'){
//         return ch;
//     }                                 //lower ko lower me rehne dega aur 
//     else{                            //capital ko bhi lower me kr dega
//         char temp=ch-'A'+'a';
//         return temp;
//     }
// }
// bool palindrome(char name[],int n){
//     int st=0;
//     int e=n-1;
//     while(st<e){
//         if(toLowerCase(name[st])!=toLowerCase(name[e])){      //Capital aur small letter same cheej hai
//             return false;
//         }
//         st++;
//         e--;
//     }
//     return true;
// }
// void reversee(char name[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         swap(name[s],name[e]);
//         s++;
//         e--;
//     }
// }

// int getLength(char name[]){     //string ke case me yaha pr size pass krne ki jarurta nhi hai 
//     int cnt=0;
//     for(int i=0;name[i]!='\0';i++){
//         cnt++;    
//     }
//     return cnt;
// }
 
// int main(){
//     char name[10];
//     cout << "Enter name:";
//     cin >> name;                                    //cin execution ko stop kr deta hai jabbhi 
//     cout << "Name is:" << name << endl;            //use aap space,tab,newline char denge
//     int len=getLength(name);
//     cout << "Length is:" << len << endl;
//     reversee(name,len);
//     cout << "Reverse is:" << name << endl;

//     if(palindrome(name,len)){
//         cout << "Palindrome";
//     }
//     else cout << "Not Palindrome";
// } 



//Reverse words in a string 

// i/p:  My name is abhi
// o/p:  yM eman si ihba

// approack words/string cretae krt jauga char se jese
// hi space(' ') ayega jo word bn gya use reverse kr duga

// aur last word ko krne ke liye 1 aur case: jese hi null
// charater ayega word ko reverse kr duga


//maximum char in a string
// char tolower(char str){
//     if(str>='a' && str<='z') return str;
//     else{
//         char temp=str-'A'+'a';
//         return temp;
//     }
// }
// int main(){
//     string s;
//     cin >> s;
//     unordered_map<char,int> mp;
//     for(int i=0;i<s.size();i++){
//         (mp[tolower(s[i])])+=1;
//     }
//     int maxFreq=INT_MIN;
//     char maxChar;
//     for(auto it:mp){
//         if(it.second>max) {
//             maxChar=it.first;
//             maxFreq=it.second;
//         }
//     }
//     cout << "The maximum ocurring character is:" << maxChar;
// }




//spaces haatao or uski jagah @40 dal do
// int main(){
//     string str;
//     getline(cin,str);
//     string temp="";
//     for(int i=0;i<str.size();i++){
//         if(str[i]==' '){
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else{
//             temp.push_back(str[i]);
//         }
//     }
//     cout << temp;
// }

//remove all occurences of a substring

//s.find(part) this returns the starting index of part in sc

// s->  string
// part -> (substring to remove)

// while(s.size()!=0 && s.find(part)<s.size()){
//     s.erase(s.find(part),part.length());
// }

// return s;




//remove adjacent duplicates



