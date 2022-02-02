#include<iostream>
using namespace std;
void check(int arr[],int n){
    arr[0]=98;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

cout<<"\n"<<"In function size of array:  "<<sizeof(arr)<<endl;
}
int main(){
 int arr[]={4,5,6,7,8};
 int n=sizeof(arr)/sizeof(arr[0]);
 cout<<"In main function size of array:  "<<sizeof(arr)<<endl;
 check(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
}
}