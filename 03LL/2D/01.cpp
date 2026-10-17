#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node* prev;

  public:
  Node(int data1,Node* next1,Node* prev1){
    data=data1;
    next=next1;
    prev=prev1;
  }

  public:
  Node(int data1){
    data=data1;
    next=nullptr;
    prev=nullptr;
  }
};

//1.convert Arr2DLL
Node* convertArr2DLL(vector<int> &arr){
  Node* head=new Node(arr[0]);
  Node* mover=head;
  for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i]);
    mover->next=temp;
    temp->prev=mover;
    mover=temp;
  }
  return head;
}

int main(){
  vector<int> arr={1,2,3,4,5};
  Node* head=convertArr2DLL(arr);
  Node* temp=head;
  while(temp){
    cout << temp->data << " ";
    temp=temp->next;
  }
}