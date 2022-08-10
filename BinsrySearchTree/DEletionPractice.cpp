#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int key;
    Node* left;
    Node* right;
    Node(int d){
        key=d;
        left=right=NULL;
    }
};
Node* build(Node* n,int key){
    if(n==NULL){
        return new Node(key);
    }
    else if(key<n->key){
        n->left=build(n->left,key);
    }else{
        n->right=build(n->right,key);
    }
    return n;

}
//Find smallest elemenmt in left of root element
int smallestELEMENt(Node* n){
        while(n->left!=NULL){
        n=n->left;
    }
    cout<<"SMallest "<<n->key<<endl;
    return n->key;
}
//DElete any particular node...
Node* deletion(Node* n,int key){
        if(n==NULL){
            return NULL;
        }
        else if(key<n->key){
            n->left=deletion(n->left,key);
        }
        else if(key>n->key){
           n->right= deletion(n->right,key);
        }
        else if(key==n->key){
            //for zero child
            if(n->left==NULL and n->right==NULL){
                delete n;
                n=NULL;
            }
            else if(n->left==NULL){
                Node* temp=n;
                n=temp->right;
                delete temp;
            }
            else if(n->right==NULL){
                Node* temp=n;
                n=temp->left;
                delete temp;
            }
            //CASE 3 TWO CHILDREN...
            else if(n->left!=NULL & n->right!=NULL){
                int smallest=smallestELEMENt(n->right);
                n->key=smallest;
                n->right=deletion(n->right,smallest);
            }
        }
    return n;
}
void printTree(Node* n){
    if(n==NULL){
        return;
    }
    
    printTree(n->left);
    cout<<n->key<<" ";
    printTree(n->right);
    
}
int main()
{
Node* n=NULL;
        int arr[]={4,3,1,5,9,8,10,11};
        for(int x:arr){
            n=build(n,x);
        }
        printTree(n);
        n=deletion(n,5);
        cout<<endl;
        printTree(n);
    return 0;
}