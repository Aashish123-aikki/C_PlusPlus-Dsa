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
void printTree(Node* n,int k1,int k2){
    if(n==NULL){
        return;
    }
    if(n->key>=k1 and n->key<=k2){
    printTree(n->left,k1,k2);
    cout<<n->key<<" ";
    printTree(n->right,k1,k2);
    }
    else if(n->key<k1){
        printTree(n->right,k1,k2);
    }
    else if(n->key>k2){
        printTree(n->left,k1,k2);
    }
}
int main(){
    Node* n=NULL;
        int arr[]={4,3,1,5,9,8,10,11};
        for(int x:arr){
            n=build(n,x);
        }
        printTree(n,1,8);

    return 0;
}