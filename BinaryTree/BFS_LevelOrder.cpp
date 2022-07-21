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
void bfs(queue<Node*> q,queue<Node*> output){
    if(q.empty()){
        
         while (output.size()>0)
    {
        /* code */
        if(output.front()==NULL){
            cout<<endl;
        }else{
        cout<<output.front()->data<<" ";}
        output.pop();
    }
        return;
    }
    Node* np=q.front();
    if(np==NULL){
        
        q.pop();
        if(!q.empty()){
        q.push(NULL);}
        output.push(NULL);
        bfs(q,output);
    }
    q.pop();
    if(!(np->left==NULL)){
    q.push(np->left);}
    if(!(np->right==NULL)){
    q.push(np->right);}
    output.push(np);
    
    bfs(q,output);
   
    
}
int main()
{
    Node *n=buildtree();
    queue<Node*> q;
    q.push(n);
    q.push(NULL);
    queue<Node*> output;
    bfs(q,output);
    return 0;
}