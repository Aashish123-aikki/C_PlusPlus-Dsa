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
    cout<<n->key<<" ";
    printTree(n->right);
    
}

int findersmaller(Node*n){
        while(n->left!=NULL){
            n=n->left;
        }
        return n->key;
}
Node* deletion(Node*n,int key){
    if(n==NULL){
        return NULL;
    }
    
    else if(key<n->key){
        n->left=deletion(n->left,key);
    }
    else if(key>n->key){
       n->right= deletion(n->right,key);
    }else {
        //CASE 1 (ZERO CHILDREN)
        if(n->left==NULL and n->right==NULL){
            
            delete n;
            n=NULL;
        }
        //CASE 2 (1 CHILDERN OF NODE)
        else if(n->right==NULL){  
            Node* temp=n;
            n=n->left;
            delete temp;
        }else if(n->left==NULL){
            Node* temp=n;
            n=temp->right;
            delete temp;
        }
        //CASE 3 (2 CHILDREN OF NODE)
        else {
            int smallest=findersmaller(n->right);
            n->key=smallest;
            n->right=deletion(n->right,smallest);
        }

    }
    return n;
}
int main(){
        Node* n=NULL;
        int arr[]={4,3,1,5,9,8,10,11};
        for(int x:arr){
            n=build(n,x);
        }
        printTree(n);
        cout<<endl;
       n=deletion(n,5);
        printTree(n);
    return 0;
}