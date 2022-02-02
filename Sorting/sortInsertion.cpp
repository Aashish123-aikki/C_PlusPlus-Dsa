#include<iostream>
using namespace std;
int sortin(int arr[],int n){
    
    for(int i=1;i<n;i++){
        int current=arr[i];
        int prev=i-1;
        while(prev>=0 & arr[prev]>current){
           arr[prev+1]=arr[prev];
             prev--;      
          }
             arr[prev+1]=current;
       
     
    }
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<", ";
    }
    
}

int main(){
    int arr[]={4,52,6,71,8,23};  //{4,6,52,71,8,23} {4,6,52,8,71,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortin(arr,n);
    
}