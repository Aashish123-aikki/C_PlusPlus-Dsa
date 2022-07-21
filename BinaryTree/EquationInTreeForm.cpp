#include<bits/stdc++.h>
using namespace std;

//preOrder binary tree in which we first build root node then left node and then right
//root node->leftnode->right node........
class Node{
    public:
    string data;
    Node* left;
    Node* right;

    Node(string d){
        data=d;
        left=right=NULL;
    }
};
Node* buildtree(){
    string d;
    cin>>d;
    if(d=="-1"){
        return NULL;
    }
    Node* n=new Node(d);
    n->left=buildtree();
    n->right=buildtree();
    return n;
}
string s="";
void printPreOrder(Node *root){
    if(root==NULL){
            return;
    }
    
    printPreOrder(root->left);
    s+=root->data;
    printPreOrder(root->right);

}
int solver(string s3){
    int result=0;
for(int i=0;i<s3.length()-1;i++){
    string q=s3.substr(i,i+1);
    string q2=s3.substr(i+1,i+2);
            switch (s3[i])
            {
                
            case '+':
                /* code */
                result=result+stoi(q2);
                i++;
                break;
            case '-':
                /* code */
                result=result-stoi(q2);
                i++;
                break;
            case '*':
                /* code */
                result=result*stoi(q2);
                i++;
                break;
            case '/':
            result=result/stoi(q2);
            i++;
            break;
            default:
                result=result+stoi(q);
                
                break;
            }
        }
        return result;
}

int main()
{
    Node* n=buildtree();

        printPreOrder(n->left);
        string s1=s;
        s.clear();
        printPreOrder(n->right);
        
        reverse(s1.begin(),s1.end());
        reverse(s.begin(),s.end());

        int leftresult=solver(s1);
        int rightresult=solver(s);
        int result=0;
        string s2=to_string(leftresult)+n->data+to_string(rightresult);
        cout<<solver(s2);
        
    return 0;
}
//input...... + * 3 -1 -1 2 -1 -1 * 4 -1 -1 + 5 -1 -1 1 -1 -1
//outputs:
//  for Pre Order Traversal: 1 2 4 5 7 3 6
//  for IN  Order Traversal: 4 2 7 5 1 3 6
//  for POstORder Traversal: 4 7 5 2 6 3 1