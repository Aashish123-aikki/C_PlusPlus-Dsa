#include<bits/stdc++.h>
using namespace std;

//
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data=d;
        left=right=NULL;
    }
};
Node* buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* n=new Node(d);
    n->left=buildTree();
    n->right=buildTree();
    return n;
}
//To check height of tree....
int mindepth(Node* root){
    if(root==NULL){
        return 0;
    }
    int h1=mindepth(root->left);
    int h2=mindepth(root->right);
    if(h1==0 & h2!=0){
        return 1+h2;
    }else if(h1!=0 & h2==0){
        return 1+h1;
    }
    return 1+min(h1,h2);
}

int main()
{
    Node *n=buildTree();
    cout<<mindepth(n);
    return 0;
}