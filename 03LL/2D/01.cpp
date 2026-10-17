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

//2.delete head
Node* deletehead(Node* head){
  Node* temp=head;
  head=head->next;
  head->prev=nullptr;
  temp->next=nullptr;
  free(temp);
  return head;
}

//3.delete tail
Node* deletetail(Node* head){
  Node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->prev->next=nullptr;
  temp->prev=nullptr;
  free(temp);
  return head;
}

//4.delete kth form dll
Node* deletek(Node* head,int k){
  if(head==NULL) return NULL;
  int cnt=0;
  Node* temp=head;
  while(temp){ 
    cnt++;
    if(cnt==k) break;
      temp=temp->next;
  } 
  Node* back=temp->prev;  //jab hm while se bahar aynge to hamra temp usi node pr hoga jisse delete krna hai
  Node* front=temp->next;
  if(back==NULL && front==NULL){
    delete temp;
    return NULL;
  }
  else if(back==NULL){
      return deletehead(head);
    }
  else if(front==NULL){
    return deletetail(head);
  }
  else{
    back->next=front;
    front->prev=back;
    temp->next=nullptr;
    temp->prev=nullptr;
    delete temp;
  }
  return head;
}

//5.delete by value from dll
Node* deletebyele(Node* head,int ele){  //it is given that the ele shoudl not be in head node
  Node* temp=head;
  while(temp){
    if(temp->data==ele) break;
    temp=temp->next;
  }
  Node* back=temp->prev;
  Node* front=temp->next;
  if(front==NULL){
    return deletetail(temp);
  }
  back->next=front;
  front->prev=back;
  temp->next=nullptr;
  temp->prev=nullptr;
  delete temp;
  return head;
}

//6.insertion before head
Node* insertHead(Node* head,int ele){
  Node* newHead=new Node(ele,head,nullptr)
  head->prev=newHead;
  return newHead;
}

//7.insertion before tail
Node* inserttail(Node* head,int ele){
  Node* tail=head;
  while(tail->next!=NULL){
    tail=tail->next;
  }
  Node* back=tail->prev;
  Node* newNode=new Node(ele,tail,back);
  tail->prev=newNode;
  back->next=newNode;
  return head;
}

//8. insert before kth ele
Node* insertk(Node* head,int k,ele){
  if(k==1) return insertHead(head,ele);
  Node* temp=head;
  int cnt=0;
  whike(temp!=NULL){
    cnt++;
    if(cnt==k) break;
    temp=temp->next;
  }
  Node* back=temp->prev;
  Node* newNode=new Node(ele,temp,back);
  back->next=newNode;
  temp->prev=newNode;
  return head;
}

//9.insert before given node
void insertnode(Node* node,int ele){
  Node* back=node->back;
  Node* newNode=new Node(ele,node,back);
  prev->next=newNode;
  node->prev=newNode;
}

int main( ){
  vector<int> arr={1,2,3,4,5};
  Node* head=convertArr2DLL(arr);
  Node* temp=head;
  while(temp){
    cout << temp->data << " ";
    temp=temp->next;
  }
  head=deletehead(head);
  cout << head->data;
}
