#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node *right;

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

//helper
queue<Node *> helper(queue<Node*>q,queue<Node*>output,int k){
        if(q.empty()){
            int count=0;
   while(!output.empty()){
    
    if(count==k){
        while(output.front()!=NULL){
            cout<<output.front()->data<<" ";
            output.pop();
        }
        break;
    }
    if(output.front()==NULL){
        count+=1;
    }
   output.pop();
   }
        }
        Node* current=q.front();
        if(current==NULL){
            q.pop();
            if(!q.empty()){
            q.push(NULL);}
            output.push(NULL);
            helper(q,output,k);
        }
        if(current->left!=NULL){
            q.push(current->left);
        }if(current->right!=NULL){
            q.push(current->right);
        }
        q.pop();
        output.push(current);
        helper(q,output,k);
        return output;

}

vector<int> printKthLevel(Node* root, int k){
    // your code goes here
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    queue<Node*> output;
   helper(q,output,k); 
  

}
int main()
{
    Node* n=buildtree();
    printKthLevel(n,2);
    return 0;
}