#include<bits/stdc++.h>
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

//1. convert Arr2LL
Node* convertArr2LL(vector<int> &arr){
  Node* head=new Node(arr[0]);
  Node* mover=head;
  for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i]);
    mover->next=temp;
    mover=temp ;
  }
  return head;
}


// 2. Length of linked list
int length(Node *head){
  Node* temp=head;
  int cnt=0;
  while(temp){
    temp=temp->next;
    cnt++;
  }
  return cnt;
}


// 3. Check if element present or not
bool check(Node* head,int val){
  bool ans=false;
  Node* temp=head;
  while(temp){
    if(temp->data ==val) ans=true;
    temp=temp->next;
  }
  return ans;
}

//4. deletion of a node
Node* deleteHead(Node* head){
  if(head==NULL) return NULL;       //if empty linked list 
  Node* temp=head;
  head=head->next;
  free(temp);
  return head;
}

int main(){
  vector<int> arr={1,2,3,4,5};
  Node* head=convertArr2LL(arr);
  Node* temp=head;
  while(temp){
    cout << temp->data << " ";
    temp=temp->next;
  }
  cout << endl;
  cout << "lenght of linked list is: " << length(head) << endl;
  cout << "check element or not: " << check(head,8);
}