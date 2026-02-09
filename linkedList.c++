#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};


// int main(){
//     vector<int> arr={2,5,8,7};
//     Node* y=new Node(arr[0],nullptr);
//     cout << y << " " << y->data << " " << y->next;
// }



//1.conert array to LL

Node* convertArr2ll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int lengthOFll(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

int checkIFpresent(Node* head,int val){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==val) return 1;
        temp=temp->next;
    }
    return 0;
}

Node* deletehead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}

void traverse(Node* head){
    while(head!=NULL){
        cout << head->data << " ";
        head=head->next;
    }
    cout << endl;
}

Node* deletelast(Node* head){
    if(head==NULL || head->next==NULL){    //empty ll or single eleemnt in LL
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    return head;
}

int main(){
    vector<int> arr={32,5,8,19,46,78,98,8,7};
    Node* head=convertArr2ll(arr);
    cout << head << " " << head->data << " " << head->next << endl;

    //delete head 
    head=deletehead(head);
    cout << "After deleting the head" << endl;
    traverse(head);

    //delete tail
    head=deletelast(head);
    cout << "After deleting the last" << endl;
    traverse(head);

     

    cout << "Lengh of LL is " << lengthOFll(head) << endl;    //o(N)

    //check if element is present or not    (o(N))
    cout << "Enter the val to search for" << endl;
    int val;
    cin >> val;
    if(checkIFpresent(head,val)) cout << "Yes";
    else cout << "NO";
}






