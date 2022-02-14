#include<bits/stdc++.h>
using namespace std;
bool issafe(int board[][30],int i,int j,int n){
    //colmun check....
            for(int k=0;k<=i;k++){
                if(board[k][j]==1){
                    return false;
                }
            }
        //left diagnol check.....
        int x=i;
        int y=j;
        while(x>=0 &y>=0){
            if(board[x][y]==1){
                return false;
            }
            x--;
            y--;
        }
        //right diagnol....
        while(i>=0 &j<n){
            if(board[i][j]==1){
                return false;
            }
            i--;
            j++;
        }
        return true;
}
int helper(int board[][30],int n,int i){
    
    if(i==n){
        for(int k=0;k<n;k++){
            for(int y=0;y<n;y++){
                cout<<board[k][y]<<" ";
            }
            cout<<endl;
        }
        return 1;
    }
  for(int j=0;j<n;j++){
    if(issafe(board,i,j,n)){
            board[i][j]=1;
            bool suces=helper(board,n,i+1);
            if(suces){
                return 1;
            }
            board[i][j]=0;
    }
    }
    return 0;
}

int solve(int n){
    int board[30][30]={0};
   helper(board,n,0);
}
int main(){
    int n;
    cin>>n;
    solve(n);

}