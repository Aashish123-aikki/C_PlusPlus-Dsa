#include<bits/stdc++.h>
using namespace std;
bool issafe(vector<vector<int>> mat,int m,int n,int i,int j){
        if(mat[i][j]==1){
            return false;
        }
        return true;
}

int solve(vector<vector<int>> mat,int m,int n,int i,int j){
    if(i==m and j==n){
        return 1;
    }
    // if(!j<0 | !i<0| j>0 |i>0){
    //     return 0;
    // }
    // int up,left;
    // //move up
    // if(issafe(mat,m,n,i-1,j)){
    //      up=solve(mat,m,n,i-1,j);
    // }
    // //move left...
    // if(issafe(mat,m,n,i,j-1)){
    //  left=solve(mat,m,n,i,j-1);
    // }
    // //move right...
    // int right=solve(mat,m,n,i,j+1);
    // int bottom=solve(mat,m,n,i+1,j);
    // int add=left+right+bottom+up;
    // return add;
      
}

int main(){
    
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
           mat[i][j]=a;
        }
    }
    cout<<solve(mat,m,n,0,0);
   
}