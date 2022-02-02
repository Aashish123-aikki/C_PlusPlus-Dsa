#include<iostream>
using namespace std;
pair<int,int> search(int a[][5],int r,int c,int n){
            // for(int i=0;i<r;i++){             //...time complexity o(N^2)....//
            //     for(int j=0;j<c;j++){
            //         if(a[i][j]==n){
            //             return {i,j};
            //         }
            //     }
            // }


//Time complexity o(n)
            int i=0;
            int j=c-1;
            while(i<r and j>=0){
                if(a[i][j]==n){
                    return {i,j};
                }
                else if(a[i][j]>n){
                   j--;
                }
                else{
                    i++;
                }
            }
}

int main(){
    int ar[][5]={{3,4,5},{6,7,8}};
    int n;
    cout<<"Enter no. ot search: ";
    cin>>n;
    cout<<endl;
    cout<<search(ar,2,3,n).first<<", "<<search(ar,2,3,n).second;
}