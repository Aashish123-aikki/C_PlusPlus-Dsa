#include <bits/stdc++.h>
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
int sumfinder(vector<int> v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}
vector<vector<int>> result;
vector<int> vec;
Node*  pathSum(Node* root, int targetSum){
    // your code goes here
    if(root==NULL){
        return NULL;
    }
    vec.push_back(root->data);
    Node* left=pathSum(root->left,targetSum);
    Node* right=pathSum(root->right,targetSum);
    
    if(left==NULL & right==NULL){
        int sum=sumfinder(vec);
        if(sum==targetSum){
            result.push_back(vec);
        }

    }
    vec.pop_back();
    return root;

}
int main(){
    Node* n=buildtree();
    pathSum(n,22);
    for(vector<int> x:result){
        for(int y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

}
//input :5 4 11 7 -1 -1 2 -1 -1 -1 8 13 -1 -1 4 5 -1 -1 1 -1 -1