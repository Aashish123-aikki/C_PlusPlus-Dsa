#include<bits/stdc++.h>
using namespace std;

//printing board....
void printbord(int board[][20],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
//cansolve ....
bool cansolve(int board[][20],int n,int x,int y){
    //for coloum ....
        for(int roe=0;roe<x;roe++){
            if(board[roe][y]==1){
                return false;
            }
        }
int i=x;
int j=y;
        //left diagnol....
        while(i>=0 & j>=0){
            if(board[i][j]==1){
                return false;
            }
            i--;j--;
        }
        //right diagnol....
        while (x>=0 & y<=n)
        {
            if(board[x][y]==1){
                return false;
            }
            x--; y++;
        }
        return true;
        
}
//solveNQueen Function.....
int solveNQueen(int board[][20],int n,int i){
    if(i==n){
        // printbord(board,n);
        return 1;
    }

    int ways=0;

    for(int j=0;j<n;j++){
             if(cansolve(board,n,i,j)){
                        board[i][j]=1;
    /*    bool success=*/  ways+= solveNQueen(board,n,i+1);
    //    if(success){
    //        return true;
    //    }
           
       board[i][j]=0;

   }
    }
    return ways;
}

int main(){
    int board[][20]={0};
    int n;
    cin>>n;
    cout<<solveNQueen(board,n,0);

}