#include<bits/stdc++.h>
using namespace std;
bool issorted(int arr[],int i,int n){
    if(i==n-1){
        return true;
    }
    if(arr[i]<arr[i+1] & issorted(arr,i+1,n)){
        return true;
    }
    return false;
}
int main(){
    int arr[]={4,5,6,7,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<issorted(arr,0,n);
}