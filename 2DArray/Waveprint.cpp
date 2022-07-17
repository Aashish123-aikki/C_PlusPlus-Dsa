#include<iostream>
using namespace std;

void printWave(int r,int c,int a[][100]){
    int stratrow=0;
    int endrow=r-1;
    int startcol=0;
    int endcol=c-1;

    while(endcol>=0){
            for(int row=stratrow;row<=endrow;row++){
                cout<<a[row][endcol]<<" ";
            }
            endcol--;
            for(int row=endrow;row>=stratrow;row--){
                if(endcol<0){
                    break;
                }
                cout<<a[row][endcol]<<" ";
            }
            endcol--;


    }
    
}

int main(){
    int r,c;
    cin>>r>>c;
    int a[100][100];
    for (int i=0;i<r;i++){
        cout<<"Enter elements of Row: "<<i<<endl;
        for(int j=0;j<c;j++){
            cin>>a[i][j];
            
        }
    }
    printWave(r,c,a);

}//1 2 3 4
// 5 6 7 8
// 9 8 5 11

4 8 11 5
7 3 2 6
8 9 5 1