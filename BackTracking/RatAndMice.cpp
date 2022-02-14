#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> mat,int m,int n,int i,int j){
    
}

int main(){
    vector<vector<int>> mat;
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            mat[i][j]=a;
        }
    }
    solve(mat,m,n,0,0);
   
}