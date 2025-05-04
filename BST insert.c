#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data=x;
        left=nullptr;
        right=nullptr;
    }
};

void preorder(Node* root){
    if(root==nullptr){
        return;
    }
    preorder(root->left);
    cout<<root->data;
    preorder(root->right);
}

Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }

   if(val<root->data){
       root->left= insert(root->left, val); 
   }
   else{
       root->right=insert(root->right,val);
   }
   return root;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
     Node* root=nullptr;
     for(int i=0;i<n;i++){
         root=insert(root,arr[i]);
     }
     
     preorder(root);
}
