#include<bits/stdc++.h>
using namespace std;

void funct(int a[],int n,int j){
    if(n==1){
        return ;
    }
    if(j==n-1){
        funct(a,n-1,0);
        return ;
    }
   
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
  funct(a,n,j+1);
    
}

int main(){
int a[]={6,7,9,3,4,5,1};
    int n=sizeof(a)/sizeof(a[0]);
    funct(a,n,0);
    for(int x:a){
        cout<<x<<" ";
    }

}