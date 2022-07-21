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

//SumOFALL Nodes.....
int sumOFNodes(Node* n){
    if(n==NULL){
        return 0;
    }
    int left=sumOFNodes(n->left);
    int right=sumOFNodes(n->right);
    return (n->data)+left+right;
}
queue<int> q;

void printr(Node* n,int sum){
    if(n==NULL){
        
        return;
    }
    q.push(n->data);
    printr(n->left,sum);
    printr(n->right,sum);
   
}
int main()
{
        Node* n=buildtree();
        cout<<sumOFNodes(n);
       printr(n,0);
       int sum=0;
       while(!q.empty()){
        sum=sum+q.front();
        q.pop();
       }
       cout<<endl<<sum;
    return 0;
}