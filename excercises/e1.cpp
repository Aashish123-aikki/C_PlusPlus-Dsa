#include<iostream>
using namespace std;

int maxelement(int arr[],int n){
    int maxe=0;
  for(int i=0;i<n;i++){
        if(maxe<arr[i]){
            maxe=arr[i];
        }
  }
  return maxe;
}

int main(){
    int a[5];
    for (int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int n=sizeof(a)/sizeof(a[0]);
 
    cout<<"Max element is: " <<maxelement(a,n);
}