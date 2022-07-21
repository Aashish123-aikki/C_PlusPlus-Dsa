//REmove nodes if any one of the  subnode of any node is null;
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
queue<int> q;
Node* leftsymetrry(Node *root){
    if(root==NULL){
            return NULL;
    }
    
   Node *left= leftsymetrry(root->left);
  Node *right= leftsymetrry(root->right);
   if((left==NULL & right==NULL) || (left!=NULL & right!=NULL)){
    q.push(root->data);
   
   }
   return root;

}


int main()
{
    Node* n=buildtree();
    leftsymetrry(n);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
//Symmetric input 1 2 3 -1 -1 4 -1 -1 2 4 -1 -1 3 -1 -1
//input...... 2 7 -1 6 1 -1 -1 11 -1 -1 5 -1 9 4 -1 -1 -1
//outputs:
//  for Pre Order Traversal: 1 2 4 5 7 3 6
//  for IN  Order Traversal: 4 2 7 5 1 3 6
//  for POstORder Traversal: 4 7 5 2 6 3 1