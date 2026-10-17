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

//Reverse LL brute force pehle stack me dalo fir nikalo
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

int main(){
  vector<int> arr={1,2,3,4,5};
  Node* head=convertArr2LL(arr);
  head=reverseLL(head);
  Node* temp=head;
  while(temp){
    cout << temp->data << " ";
    temp=temp->next;
  }
}