#include <bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data=value;
        left=right=NULL;
    }
}

int main(){
    Node* root=new Node(1);                          
    root->left=new Node(2);
    root->right=new Node(3);                 
    root->left->right=new Node(5);
}

// result of above is :
    //     1
    //    / \
    //   2   3
    //    \
    //     5


//TRAVERSAL TECHNIQUES

//Pre order Traversal
void preorder(Node* node){
    if(node==NULL) return;
    cout << node->data;
    preorder(node->left);
    preorder(node->right);
}

//Inorder Traversal
void inorder(Node* node){
    if(node==NULL) return;
    inorder(node->left);
    cout << node->data;
    inorder(node->right);
}

//Post Traversal
void postorder(Node* node){
    if(node==NULL) return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data;
}


//Level order Traversal of BT

vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        vector<int> lev;
        for(int i=0;i<n;i++){
            Node* node=q.front();
            q.pop();
            if(node->left!=NULL) q.push(node->left );
            if(node->right!=NULL) q.push(node->right);
            lev.push_back(node->data);
        }
        ans.push_back(lev);
    }                                  //tc=o(N)
    return ans;                        //sc=o(N)
}


// Iterative Preorder(Root left Right)

vector<int> preTraversal(Node* root){
    vector<int> ans;
    if(root==NULL) return ans;
    stack<Node*> st;
    st.push(root);          //initially i push the root
    while(!st.empty()){    
        Node* curr=st.top();
        st.pop();
        ans.push_back(curr->data);   //in every iteration gets the topmost of stack
        if(curr->right!=NULL) st.push(curr->right);
        if(curr->left!=NULL) st.push(curr->left);         //tc=o(N)   have to iteare every node
    }                                                     //sc=o(N)
    return ans;
}


//Iterative inorder(left root rigth)

vector<int> inorder(Node* root){
       vector<int> ans;
       stack<Node*> st;
       Node* node=root;
       while(true){
        if(node!=NULL) {
        st.push(node);
        node=node->left;
    }
    else{
        if(st.empty()==true) break;
        node=st.top();                    //tc=o(N)
        st.pop();                        //sc=o(N) 
        ans.push_back(node->val);
        node=node->right;
    }
}
return ans;
}

//Iterative postorder (left right root)(using 2 stack)

vector<int> postorder(Node* root){
    vector<postorder> int;
    stack<Node*> st1,st2;
    if(root==NULL) return postorder;
    st1.push(root);
    while(!st1.empty()){
        root=st1.top();
        st1.pop();
        st2.push(root);
        if(root->left!=NULL) st1.push(root->left);
        if(root->right!=NULL) st1.push(root->right);
    }
    while(!st.empty()){
        postorder.push_back(st2.top()->val);
        st2.pop();                                       //tc=o(n)
    }                                                     //sc=o(n)
    return postorder;
}



//Maximum depth of BT

int maxDepth(Node* root){
    if(root== null) return 0;

    int lh=maxDepth(root->left);             
    int rh=maxDepth(root->right);

    return 1+max(lh,rh);
}

//Balanced Binary Tree   {for every node  height(left)-height(right)<=1}
bool check(Node* node){
    if(node==NULL) return true;

    lh=maxDepth(node->left);      //tc=o(n^2)
    rh=maxDepth(node->right);

    if(abs(lh-rh)>1) return false;

    bool left=check(node->left);        //hr node ko check krna hai
    bool rigth=check(node->rigth);    //ki height(left)-height(right)<=1

    if(!left || !right) return false;

    return true;
}


//Balanced binary tree in order  in tc =o(n);

bool isBalanced(Node* root){
    return height(root)!=-1;
}

int main(){
    int height(Node* root){
        if(root==NULL) return 0;

        int lh=height(root->left);
        if(lh=-1) return -1;
        int rh=height(root->right);
        if(rh=-1) return -1;  

        if(abs(lh,rh)>1) return -1;
        return 1+max(lh,rh);
    }
}


//construct lever order tree
//input :  15 10 20 null 30 null 50

Node* buildtree(vector<string> arr){
    if(arr.size()==0) return NULL;

    Node* root=new Node(stoi(arr[0]));
    queue<Node*> q;
    q.push(root);

    int i=1;
    while(!q.empty() && i<arr.size()){
        Node* node=q.front();
        q.pop();

        if(arr[i]!=NULL){
            node->left=new Node(stoi(arr[i]));
            q.push(node->left);
        } i++;

        if(i<arr.size() && arr[i]!=NULL){
            node->right =new Node(stoi(arr[i]));
            q.push(node->right);
        } i++;
}
return root;
}

int main(){
    int n;
    cin >> n;

    vector<string> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];

    Node* root= buildtree(arr);
    cout << heightoftree(root);

}
 


//Diameter of node

//brute force

find dia(Node node){    //for any given node find the left and right height and the sum of them is dia
    if(node==NULL) return ;

    int lh=maxDepth(node->left);   //lh nikalo
    int rh=maxDepth(node->right);    //rh nikalo
    int high=max(high,lh+rh);                 //tc=o(N^2)

    dia(root->left);   //hr node pe traverse krna hai
    dia(root->right);
}


// in order of o(n)

int findMax(node,maxi){
    if(node==NULL) return 0;

    lh=findMax(node->left,maxi);
    rh=findMax(node->rigth,maxi);
    maxi=max(maxi,lh+rh);

    return 1+max(lh,rh);
}


//lca  

Node* lca(Node* root,Node* p,Node* q){
    if(root==NULL || root==p || root==q) return root;

    Node* lh=lca(root->left,p,q);
    Node* rh=lca(root->right,p,q);

    if(lh==NULL) return rh;        
    else if(rh==NULL) return lh;
    else{
        return root;
    }
}

 
 
//BST


//search in a bst

Node* search(Node* root,int val){
    while(root!=NULL || root->data!=val){
        root=val < root->data ? : root->left:root->right;
    }
    return root;
}


//Ceil in a bst

Node* Ceil(Node* root,int key){
    int ceil=-1;
    while(root){
        if(root->data==key) {
            ceil=root->data;
            return ceil;
        }
        if(key>root->data){
            root=root->right;
        }
        else{
            ceil=root->data;
            root=root->left;
        }
    }
    return ceil; 
}

//floor in a bst

Node* Floor(Node* root,int key){
    int floor=-1;
    while(root){
        if(key==root->data){
            floor=root->data;
            return floor;
        }
        if(key>root->data){
            floor=root->data;
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    return floor; 
}


//insert a node in bst

Node* insert(Node* root,int key){
    if(root==NULL) return new Node(key);
    Node* curr=root;
    while(true){
        if(curr->data<=key){
            if(curr->right!=NULL) curr=curr->right;
            else {curr->right=new Node(key); break; }
        }
        else{
            if(curr->left!=NULL) curr=curr->left;
            else{
                curr->left=new Node(key);
                break;
            }
        }
    }
    return root;
}



//delete a node in bst

Node(Node* root,int key){
    if(root==NULL) return NULL;
    if(root->data==key) return helper(root);
    Node* dummy=root;
    while(root!=NULL){
        if(root->data>key){     
            if(root->left!=NULL && root->left->data==key){
                root->left=helper(root->left);
            }
            else{
                root=root->left;
            }
        }
        else{
            if(root->right!=NULL && root->right->data==key){
                root->right=helper(root->right);
            }
            else{
                root=root->right;
            }
        }
    }
    return dummy;
}

Node* helper(Node* root){
    if(root->left==NULL){
        return root->right;
    }
    else if(root->right==NULL){
        return root->left;
    }
    Node* rightchild=root->right;
    Node* lastright=findlastRight(root->left);
    lastright->right=rightchild;
    return root->left; 
}

Node* findlastRight(Node* root){
    if(root->right==NULL){
        return root;
    }
    return findlastRight(root->right);
}











class node{
    int data;
    node* l;
    node* r;
    node(int val){
        data=val;
        l=r=NULL;
    }
};


if(ar.size()==0) return NULL;

queue<Node*> q;
Node* root=new Node(stoi(ar[0]));
q.push(root);
int i=1;

while(!q.empty() && i<ar.size()){
    Node* node=q.front();
    q.pop();

    if(ar[i]!="N"){
        node->left=new Node(stoi(arr[i]));
        q.push(node->l)
    } i++;
}