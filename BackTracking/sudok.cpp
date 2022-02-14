#include<bits/stdc++.h>
using namespace std;

bool issafe(int mat[][9],int n,int i,int j,int no){
    //col and row check....
    for(int k=0;k<9;k++){
        if(mat[k][j]==no |mat[i][k]==no){
            return false;
        }
    }

    //subMatrix check....
    int sx=(i/3)*3;
    int sy=(j/3)*3;
    for(int row=sx;row<sx+3;row++){
        for(int col=sy;col<sy+3;col++){
            if(mat[row][col]==no){
                return false;
            }
        }
    }
    return true;
}

bool solve(int mat[][9],int n,int i,int j){
    if(i==n){
        for(int x=0;x<9;x++){
            for(int y=0;y<9;y++){
                cout<<mat[x][y]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(j==n){
       
        return solve(mat,n,i+1,0);
    }
    if(mat[i][j]!=0){
        return solve(mat,n,i,j+1);
    }
    for(int no=1;no<=9;no++){
        if(issafe(mat,n,i,j,no)){
           
            mat[i][j]=no;
            bool success=solve(mat,n,i,j+1);
            if(success==true){
                return true;
            }
            
        }
    }
    mat[i][j]=0;
    return false;
}

int main(){
        int mat[][9]={{5,3,0,0,7,0,0,0,0},
                      {6,0,0,1,9,5,0,0,0},
                      {0,9,8,0,0,0,0,6,0},
                      {8,0,0,0,6,0,0,0,3},
                      {4,0,0,8,0,3,0,0,1},
                      {7,0,0,0,2,0,0,0,6},
                      {0,6,0,0,0,0,2,8,0},
                      {0,0,0,4,1,9,0,0,5},
                      {0,0,0,0,8,0,0,7,9}};
        solve(mat,9,0,0);
}