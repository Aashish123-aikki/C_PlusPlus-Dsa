#include<iostream>

using namespace std;
void print(int arr[][10],int r,int c){
    
    int startcol=0;
    int startrow=0;
    int endrow=r-1;
    int endcol=c-1;

while(startcol<=endrow and startrow<=endrow){
    //startrow....
    for(int col=startcol;col<endcol;col++){
        cout<<arr[startrow][col]<<" ";
        
    }

    //endcol....
    for(int row=startrow;row<endrow;row++){
        if(startcol==endcol and row-1==startrow){
            break;
        }
        cout<<arr[row][endcol]<<" ";
    }

    //endrow..
    for(int col=endcol;col>startcol;col--){
        if(startrow==endrow and col-1==startcol){
            break;
        }
        cout<<arr[endrow][col]<<" ";
    }

    //startcol...
    for(int row=endrow;row>startrow;row--){
        cout<<arr[row][startcol]<<" ";
    }
    startrow++;
    endrow--;
    startcol++;
    endcol--;
}
}

int main(){
    int arr[][10]={{1,2,3,4,5},
                   {6,7,8,9,10},
                   {11,12,13,14,15},
                   {16,17,18,19,20},
                   {21,22,23,24,25},
                   {26,27,28,29,30}};
    int r,c;
    cin>>r>>c;
    print(arr,r,c);
}