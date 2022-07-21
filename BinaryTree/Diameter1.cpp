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
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    return 1+max(h1,h2);
}
//Function for diameter.....
int diameter(Node* n){
    if(n==NULL){
        return 0;
    }
    int d1=height(n->left)+height(n->right);
    int d2=diameter(n->left);
    int d3=diameter(n->right);
    return max(d1,max(d2,d3));
}
int main()
{
    Node *n=buildTree();
    cout<<endl;
    cout<<diameter(n);
    return 0;
}