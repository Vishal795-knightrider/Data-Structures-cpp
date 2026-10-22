#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  public:
  Node(int data1,Node* next1){
    data=data1;
    next=next1;
  }

  public:
  Node(int data1){
    data=data1;
    next=nullptr;
  }
};

Node* convertArr2LL(vector<int> &arr){
  Node* head=new Node(arr[0]);
  Node* prev=head;
  for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i]);
    prev->next=temp;
    prev=temp;
  }
  return head;
}

// 1. Reverse LL  (brute force pehle stack me dalo fir nikalo)
Node* reverseLL(Node* head){
  Node* temp=head;
  stack<int> st;
  while(temp){
    st.push(temp->data);
    temp=temp->next;
  }
  temp=head;
  while(temp){
    temp->data=st.top();
    st.pop();
    temp=temp->next;
  }
  return head;
}

//2.Add Two Numbers in Linked Lists with Digits in Reverse Order
// Given the heads of two singly linked lists representing two non-negative integers, add the numbers and return the sum as a new linked list. Each node stores one digit, and digits appear in reverse order, so the head node stores the unit digit.
// Example 1
// Input: l1 = [2, 4, 3], l2 = [5, 6, 4]
// Output: [7, 0, 8]
// Explanation: Stored numbers are 342 and 465. Sum equals 807, so reverse-order list becomes [7, 0, 8].

// approach: l1,l2 ke elements add karte jaye with carry ,jo aye uski new link list bnate jao
Node* sumTwoList(Node* l1,Node* l2){
  Node* temp1=l1;
  Node* temp2=l2;
  Node* dummyNode=new Node(-1);  //yeh newlist sum ka head ke liye rakha hai last me isko hi return krdeneg
  Node* curr=dummyNode;   //to traverse my new sumlist
  int carry=0;
  while(temp1 || temp2){
    int sum=carry;
    if(temp1) sum+=temp1->data;   //agar temp1 hai to 
    if(temp2) sum+=temp2->data;
    Node* newNode=new Node(sum%10);        //unit place ko add krne  ke liye
    carry=sum/10;                          //jo caray ayega vo next sum me add krne ke liye
    curr->next=newNode;    //in the very starting curr pointing to null ( curr=dummnode and dummynode new node (-1))  now curr next will pointe to newNode   (yaha par tumhara cur pehle baar newNode se connect ho gya aur tumhara dummynode bhi newNode connect ho gya)
    curr=curr->next;      //is line se uper hamara curr newNode se connect gya hai to ab curr ko next node pr bhej do
    if(temp1) temp1=temp1->next;
    if(temp2) temp2=temp2->next;
  }
  if(carry){                         //agar last me carry bach jata hai to last node me add krdo
    Node* newNode=new Node(carry);
    curr->next=newNode;
  }
  return dummyNode->next;
}

//3.Segregate odd and even nodes in Linked List
// Given the head of a singly linked list, rearrange the nodes so all even-valued nodes appear before all odd-valued nodes. Relative order inside the even group and inside the odd group must remain unchanged.
// Node values decide the grouping, not node positions. Return the head of the rearranged linked list after segregation finishes.
// Input: head = [1, 2, 3, 4, 5, 6]
// Output: [2, 4, 6, 1, 3, 5]

//brutr force  pehle odd even me array me dalo uske baad aray ke ele ko given ll me replace krdo
// Node* oddEvenLL(Node* head){
//   vector<int> ans;
//   Node* t1=head;
//   while(t1 && t1->next){ 
//     ans.push_back(t1->data);
//     t1=t1->next->next;
//   }
//   if(t1) ans.push_back(t1->data);  //agar t1 last node pr hai to while loop false but we have one node leeft to insert in arr so after while if temp is present push
//   Node* t2=head->next;
//   while(t2 && t2->next){
//     ans.push_back(t2->data);
//     t2=t2->next->next;
//   }
//   if(t2) ans.push_back(t2->data);
//   Node* temp=head; int i=0;
//   while(temp){
//     temp->data=ans[i]; 
//     i++;
//     temp=temp->next;
//   }
//   return head;
// }

//optmial (without extra space that is array) we weill change the ppinter in ll itself
// isme even hamesha odd se age rahegaa
Node* oddEvenLL(Node* head){
  Node* odd=head;
  Node* even=head->next;
  Node* evenHead=head->next;  //even ke head ko store krne ke liye so that last odd ele can point to thsi evenhead
  while(even && even->next){
    odd->next=odd->next->next;
    even->next=even->next->next;

    odd=odd->next;
    even=even->next;
  }
  odd->next=evenHead;
  return head;
}



//4.Sort a Linked List of 0s, 1s and 2s by Changing Links
// Given the head of a singly linked list, where every node contains only 0, 1, or 2, sort the linked list in non-decreasing order.
// Return the head of the sorted linked list. Linked list examples appear in array form for compact representation.

// Example 1
// Input: [1, 2, 0, 1, 2, 0, 1]
// Output: [0, 0, 1, 1, 1, 2, 2]
// Explanation: All 0 values move to the front, followed by all 1 values, followed by all 2 values.

//Brute force (as we know there are only 3 elements 0,1,2 so we can store the count of each then the elemenst in the same ll)
// Node* sort(Node* head){
//   Node* temp=head;
//   int cnt0=0,cnt1=0,cnt2=0;
//   while(temp){
//     if(temp->data==0) cnt0++;
//     if(temp->data==1) cnt1++;
//     if(temp->data==2) cnt2++;
//     temp=temp->next;
//   }
//   temp=head;
//   while(temp){
//     while(cnt0){
//     temp->data=0;
//     cnt0--;
//     temp=temp->next;
//     }
//     while(cnt1){
//     temp->data=1;
//     cnt1--;
//     temp=temp->next;
//     }
//     while(cnt2){
//     temp->data=2;
//     cnt2--;
//     temp=temp->next;
//     }
//   }
//   return head;
// }


//optimal (we have to do this in one pass so we will segregate three ll one contain 0 others 1and 2 then we will connect those )
Node* sort(Node* head){
  if(head==NULL || head->next==NULL) return head;

  Node* zeroHead=new Node(-1);    //yeh hmne dummynode ki tarh man lo kiya hai  //jis ll me 0s honge uska head store krne ke liye
  Node* oneHead=new Node(-1);      //1s ll ka head
  Node* twoHead=new Node(-1);

  Node* zero=zeroHead;    //yeh hm ll bnayenge 0s wali usko traverse ke liye     (nayi ll  nhi bnagi yaha hm bs existing ll me hi pointer ko manipulate krnege)
  Node* one=oneHead;
  Node* two=twoHead;

  Node* temp=head;    //jo given ll uspe traverse krne ke liye  isme se hi  to 0s.1s extract krke 3 ll me dalne hai
  while(temp){
    if(temp->data==0){
      zero->next=temp;
      zero=temp;            //zero se traverse krnege is 0s wali LL ko
    }
    else if(temp->data==1){
      one->next=temp;
      one=temp;
    }
    else{
      two->next=temp;
      two=temp;
    }
    temp=temp->next;
  }
  zero->next=(oneHead->next) ? oneHead->next:twoHead->next;           //zero->next ko 1 ke head se tabhi connect karuga 1 honge bhi manlo 1 hai hi nhi tb fir 2 ke head connect krna padega
  one->next=(twoHead->next)? twoHead->next:nullptr;
  two->next=nullptr;
  return zeroHead->next;
}



int main(){
  vector<int> arr={1,2,3,4,5};
  Node* head=convertArr2LL(arr);

  //1.Reverse
  head=reverseLL(head);
  Node* temp=head;
  //print ll after reversing
  cout << "The ll after reversing:" << endl;
  while(temp){
    cout << temp->data << " ";
    temp=temp->next;
  }
  cout << endl;

  //2.Add two list
  vector<int> l1={3,5};
  vector<int> l2={4,5,9,9};
  Node* L1=convertArr2LL(l1);
  Node* L2=convertArr2LL(l2);
  head=sumTwoList(L1,L2);
  temp=head;
  //print ll after sumtwo list
  cout << "The new sum list is:" << endl;
  while(temp){
    cout << temp->data << " ";
    temp=temp->next;
  }
  cout << endl;

  //3.odd even list
  arr={1,2,3,4,5};
  head=convertArr2LL(arr);
  head=oddEvenLL(head);
  cout << "Odd Even Linked List: " << endl;
  temp=head;
  while(temp){
    cout << temp->data << " ";
    temp=temp->next;
  }
  cout << endl;

  //4.sort 0 1 2
  arr={0,1,2,0,1,1,2,2};
  head=convertArr2LL(arr);
  head=sort(head);
  cout << "sorted List" << endl;
  temp=head;
  while(temp){
    cout << temp->data << " ";
    temp=temp->next;
  }
}