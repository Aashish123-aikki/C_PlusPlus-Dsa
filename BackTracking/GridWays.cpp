#include<bits/stdc++.h>
using namespace std;

int ways(int i,int j, int m,int n){
    if(i==m-1 & j==n-1){
        return 1;
    }
    
 if(j>n | i>m){
     return 0;
 }
    int add=ways(i+1,j,m,n)+ways(i,j+1,m,n);
    return add;

}

int main(){
        int m,n;
        cin>>m>>n;
        cout<<ways(0,0,m,n);
}