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
  if(carry){                         //agar last me carry back jata hai to last code me add krdo
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
//   if(t1) ans.push_back(t1->data);  //agar t1 last node pr hai to while loop false but we have one node leeft to insert in arr so after while if temp is rsent pus
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
}