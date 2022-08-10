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
void printBST(Node* n){
   if (n==NULL){
        return;
    }
    cout<<n->key<<" ";
    printBST(n->left);
    printBST(n->right);
}
Node* MirrorBst(Node* n){
    if(n==NULL){
        return NULL;
    }
    Node* left=MirrorBst(n->left);
    Node* right=MirrorBst(n->right);
    if(left!=NULL or right!=NULL){
        swap(n->left,n->right);
    }
    return n;
}
int main()
{
     Node* n=NULL;
        int arr[]={4,3,1,5,9,8,10,11};
        //  int arr[]={5,3,2,4,8,6,10,9,11};
        for(int x:arr){
            n=build(n,x);
        }
        printBST(n);
        cout<<endl;
        n=MirrorBst(n);
       printBST(n);
    return 0;
}