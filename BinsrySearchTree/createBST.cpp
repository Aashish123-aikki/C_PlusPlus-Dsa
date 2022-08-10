#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int key;
    Node *left;
    Node* right;

    Node(int d){
        key=d;
        left=right=NULL;
    }  
};

Node* build(Node* root,int key){
    if(root==NULL){
        return new Node(key);
    }
    if(key<root->key){
        root->left=build(root->left,key);
    }
    else{
        root->right=build(root->right,key);
    }
    return root;
}
void printTree(Node* n){
    if(n==NULL){
        return;
    }
    
    printTree(n->left);
    cout<<n->key;
    printTree(n->right);
    
}
int main()
{
    Node *n=NULL;
    int arr[]={2,8,3,7,4,1};
    for(int x:arr){
         n=build(n,x);
    }
    cout<<endl;
    printTree(n);
    
    return 0;
}