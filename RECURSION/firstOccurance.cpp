#include<bits/stdc++.h>
using namespace std;
int firstocc(int a[],int n,int key){
    if(n==0){
        return -1;
    }
    if(a[0]==key){
        return 0;
    }
    int index=firstocc(a+1,n-1,key);
    if(index!=-1){
        index++;
    }
    return index;
}
int main(){
    int a[]={5,6,7,8,9};
    int k;
    cin>>k;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<firstocc(a,n,k);
}