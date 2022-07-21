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
queue<int> q,q1;
void leftsymetrry(Node *root){
    if(root==NULL){
            return;
    }
    q.push(root->data);
    leftsymetrry(root->left);
   leftsymetrry(root->right);

}
void rightsymetrry(Node *root){
    if(root==NULL){
            return;
    }
    q1.push(root->data);
    rightsymetrry(root->right);
   rightsymetrry(root->left);

}

int main()
{
    Node* n=buildtree();
    leftsymetrry(n->left);
    rightsymetrry(n->right);
    while(!q.empty() & !q1.empty()){
        if(q.size()!=q1.size()){
            cout<<"NOT SYMMETRIC";
            break;
        }
        if(q.front()!=q1.front()){
            cout<<"NOT SYMMETTRIC";
            break;
        }
        q.pop();
        q1.pop();
        if(q.size()==0 & q1.size()==0){
            cout<<"SYMMETRIC";
         }
    }
    return 0;
}
//Symmetric input 1 2 3 -1 -1 4 -1 -1 2 4 -1 -1 3 -1 -1
//input...... 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//outputs:
//  for Pre Order Traversal: 1 2 4 5 7 3 6
//  for IN  Order Traversal: 4 2 7 5 1 3 6
//  for POstORder Traversal: 4 7 5 2 6 3 1