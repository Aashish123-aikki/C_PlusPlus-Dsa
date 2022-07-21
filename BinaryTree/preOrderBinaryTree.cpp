#include<bits/stdc++.h>
using namespace std;

//preOrder binary tree in which we first build root node then left node and then right
//root node->leftnode->right node........
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
Node* buildtree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* n=new Node(d);
    n->left=buildtree();
    n->right=buildtree();
    return n;
}
void printPreOrder(Node *root){
    if(root==NULL){
            return;
    }
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);

}
//InOrderTraversal    print (left node )then (root node) then (right node)
void printInOrderTraversal(Node *n){
    if(n==NULL){
        return;
    }
    printInOrderTraversal(n->left);
    cout<<n->data<<" ";
    printInOrderTraversal(n->right);
}
void postOrder(Node *n){
    if(n==NULL){
        return;
    }
    postOrder(n->left);
    postOrder(n->right);
    cout<<n->data<<" ";
}
int main()
{
    Node* n=buildtree();
    printPreOrder(n);
    cout<<endl;
    printInOrderTraversal(n);
    cout<<endl;
    postOrder(n);
    return 0;
}
//input...... 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//outputs:
//  for Pre Order Traversal: 1 2 4 5 7 3 6
//  for IN  Order Traversal: 4 2 7 5 1 3 6
//  for POstORder Traversal: 4 7 5 2 6 3 1