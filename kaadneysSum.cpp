#include<iostream>
using namespace std;

int check(int arr[],int n){
    int cs=0;
    int largest=0;
    for(int i=0;i<n;i++){
        cs=cs+arr[i];
        if(cs<0){
            cs=0;
        }
        largest=max(cs,largest);
    }
    return largest;
}
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<"the largest sum is: "<<check(arr,n);
}