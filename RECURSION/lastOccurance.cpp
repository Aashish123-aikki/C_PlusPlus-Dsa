#include<bits/stdc++.h>
using namespace std;
int lastoccur(int ar[],int n,int key){
    if(n==0){
        return -1;
    }
    int index=lastoccur(ar+1,n-1,key);
    if(index==-1){
            if(ar[0]==key){
                return 0;
            }
            else{
                return -1;
            }
    }
    else{
       return index+1;
    }
   
}

int main(){
        int a[]={5,4,6,7,4,8,9};
        int n=sizeof(a)/sizeof(a[0]);
        int k;
        cin>>k;
        cout<<lastoccur(a,n,k);
}