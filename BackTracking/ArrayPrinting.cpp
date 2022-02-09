#include<bits/stdc++.h>
using namespace std;

// void check(int *arr,int n,int i){
//     if(n<0){
//         return;
//     }
//      arr[n]=i;
//     check(arr,n-1,i+1);
//    arr[n]=-1*arr[n];
   
// }

// int main(){
//     int arr[10]={0};
//     int n=sizeof(arr)/sizeof(arr[0])-1;
//     check(arr,n,1);
//     for(int x: arr){
//         cout<<x<<" ";
//     }
// }
void check(vector<int> &arr,int n,int i){

    if(n<0){
        return;
    }
   
     arr[n]=i;
    check(arr,n-1,i+1);

   
}

int main(){
    vector<int> arr(8);
    int n=arr.size()-1;
    check(arr,n,1);
    for(int x: arr){
        cout<<x<<" ";
    }
    
}