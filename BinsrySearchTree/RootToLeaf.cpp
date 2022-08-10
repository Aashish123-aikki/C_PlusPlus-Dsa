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
vector<vector<int>> reslt;
vector<int> vec;
Node* printRootToLeaf(Node* n){
    if(n==NULL){
        
        return NULL;
    }
     vec.push_back(n->key);
    Node* left=printRootToLeaf(n->left);
    Node* right=printRootToLeaf(n->right);
    if(left==NULL & right==NULL){
        reslt.push_back(vec);
       
    }
    vec.pop_back();
    return n;
}
int main(){
 Node* n=NULL;
        int arr[]={4,3,1,5,9,8,10,11};
        for(int x:arr){
            n=build(n,x);
        }
        printRootToLeaf(n);
        for(vector<int> x:reslt){
            for(int y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
}