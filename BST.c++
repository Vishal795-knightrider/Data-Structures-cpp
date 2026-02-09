#include <bits/stdc++.h>
using namespace std;


Node* searchBst(Node* root.int val){
    while(root!=NULL && root->data!=val){
        root=val < root->data? root->left:root->right;
    }
    return root;
}


//insert a node in BST

Node* insert(Node* root,int val){
    if(root==NULL) return new Node(val);
    Node* cur=root;
    while(true){
        if(cur->val<=val){
            if(cur->right!=NULL) cur=cur->right;
            else{
                cur->right=new Node(val);
                break;
            }
        }
        else{
            if(cur->left!=NULL) cur=cur->left;
            else{
                cur->left=new Node(val);
                break;
            }
        }
    }

    return root;
}