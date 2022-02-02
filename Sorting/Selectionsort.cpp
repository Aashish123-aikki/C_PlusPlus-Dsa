#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
    int min=i;
    //finding minimum element loop.....
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for(int x=0;x<n;x++){
        cout<<arr[x]<<", ";
    }
}
int main(){
    int arr[]={5,8,9,3,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
}