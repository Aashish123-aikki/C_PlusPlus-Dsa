#include<bits/stdc++.h>
using namespace std;

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

//Create a Heighr and diameter pair class...
class HDpair{
    public:
    int height;
    int diameter;

};
HDpair optmisedDiamter(Node* n){
    HDpair p;
    if(n==NULL){
        p.height=p.diameter=0;
        return p;
    }
    HDpair LEFT=optmisedDiamter(n->left);
    HDpair RIGHT=optmisedDiamter(n->right);

    p.height=max(LEFT.height,RIGHT.height)+1;
    int d1=LEFT.height+RIGHT.height;
    int d2=LEFT.diameter;
    int d3=RIGHT.diameter;
    p.diameter=max(d1,max(d2,d3));
    return p;
}
int main()
{
    Node* n=buildTree();
    cout<<optmisedDiamter(n).diameter;
    return 0;
}