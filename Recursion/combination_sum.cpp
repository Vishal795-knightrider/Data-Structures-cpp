#include <bits/stdc++.h>
using namespace std;

void fn(int idx,int arr[],int tar,vector<vector<int>>& ans,vector<int>& v,int n){
  if(idx==n){
    if(tar==0) ans.push_back(v);
    return;
  }

  if(arr[idx]<=tar){
    v.push_back(arr[idx]);    //take
    fn(idx,arr,tar-arr[idx],ans,v,n);    //explore take branch
    v.pop_back();         //undo take branch  //aur yeh kr krna hai jab tum take kr rahe ho aur ab element ko leneg to target (minus) me chla jayega
  }
  fn(idx+1,arr,tar,ans,v,n);             // explore NOT TAKE branch
}

int main(){
  int arr[]={2,3,4,5,6,7};
  cout << "enter target";
  int target; cin >> target;
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<vector<int>> ans;
  vector<int> vec;
  fn(0,arr,target,ans,vec,n);
  cout << "Combinations:" << endl;
    for (const auto& row : ans){
        for(int num :row) {
            cout << num << " ";
        }
        cout << endl;
    }
}



// Simple real-life example

// Maan lo tum ek bag mein items daal rahe ho.

// Bag = []

// Tumne 2 daala:

// Bag = [2]

// Ab tum decide kar rahe ho:

// "Agar 2 le liya toh aage kya possibilities hain?"

// Saari possibilities check karne ke baad tum wapis aate ho.

// Ab doosra decision hai:

// "Agar 2 nahi liya hota toh kya hota?"

// Toh bag ko purani condition mein lana padega:

// [2] → []

// That's exactly:

// pop_back();
// Ek bahut important distinction

// pop_back() ka matlab "solution se element remove karna" nahi hai.

// It means:

// "Maine jo decision liya tha, us decision ko undo karke previous state mein wapas jao."

// Isi ko backtracking kehte hain.


// Haan, yeh exact rule samajh lo — phir backtracking ka pop_back() kab lagana hai, confusion nahi hoga.

// Short answer

// pop_back() tab karte hain jab kisi element ko push_back() karke uski branch explore kar chuke hote hain aur ab us element ko UN-TAKE karke doosri branch explore karni hoti hai.

// Matlab:

// v.push_back(arr[idx]);   // TAKE

// fn(...);                 // TAKE wali branch explore

// v.pop_back();            // TAKE decision ko undo

// fn(...);                 // NOT TAKE