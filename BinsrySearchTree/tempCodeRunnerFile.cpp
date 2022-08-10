void printTree(Node* n){
    if(n==NULL){
        return;
    }
    
    printTree(n->left);
    cout<<n->key<<" ";
    printTree(n->right);
    
}