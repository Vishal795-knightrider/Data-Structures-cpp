// Combination Sum II mein duplicate combinations isliye banne lagte hain kyunki us problem mein input array ke andar hi duplicate numbers hote hain.

// Isko ek bohot simple example se samajhte hain:

// Maan lijiye array hai candidates = [1, 1, 2] aur target = 3.

// Is array mein do baar 1 aaya hai (Index 0 par aur Index 1 par). Ab agar hum normal left-to-right recursion chalayenge (bina duplicates roke), toh recursion tree aise kaam karega:

// Rasta 1: Humne pehla 1 (Index 0 wala) liya. Phir doosra 1 skip kar diya. Phir 2 (Index 2 wala) liya.

// Sum: 1 + 2 = 3.

// Combination bana: [1, 2]

// Rasta 2: Humne pehla 1 skip kar diya. Phir doosra 1 (Index 1 wala) liya. Phir 2 liya.

// Sum: 1 + 2 = 3.

// Combination bana: [1, 2]

// Problem kahan hui?
// Computer ke hisaab se usne alag-alag elements (indices) uthaye hain, isliye uske liye yeh do alag combinations hain. Par hamare aur LeetCode ke hisaab se values toh same hain na ([1, 2])! Isiliye final answer mein [1, 2] do baar aa jayega.

// Yahi reason hai ki hum Combination Sum II mein:
// Sort karte hain: Taaki saare same elements ek saath aa jayein (jaise [1, 1, 2, 5, 6]).

// continue wala logic lagate hain: if (i > ind && arr[i] == arr[i - 1]) continue;

// Is line ka matlab yahi hota hai ki: "Bhai, agar maine is level par pehle wale 1 ko dekh liya hai (Rasta 1 mein), toh main doosre 1 se naya rasta (Rasta 2) shuru nahi karunga, kyunki wo wahi same combinations banayega."

// Short Summary:

// Combination Sum 1: Array mein duplicates nahi hote ([2, 3, 6, 7]). Isliye alag rasto se same values aane ka sawal hi paida nahi hota.

// Combination Sum 2: Array mein duplicates hote hain ([10, 1, 2, 7, 6, 1, 5]). Isliye alag indices se same values pick ho jati hain, jisko rokne ke liye humein sorting + loop check (continue) lagana padta hai.
#include <bits/stdc++.h>
using namespace std;

void fn(int idx,int arr[],int tar,vector<vector<int>>& ans,vector<int>& v,int n){
  if(tar==0){
    ans.push_back(v);
    return;
  }

  for(int i=idx;i<n;i++){
    if(i>idx && arr[i]==arr[i-1]) continue;
    if(arr[i]>tar) break;
    v.push_back(arr[i]);
    fn(i+1,arr,tar-arr[i],ans,v,n);
    v.pop_back();
  }
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