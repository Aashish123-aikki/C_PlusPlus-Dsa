#include<iostream>
using namespace std;
void printsubarray(int arr[],int n){

        for(int i=0;i<n;i++){
            for (int j = 0; j < n; j++)
            {
                // cout<<"("<<arr[i]<<","<<arr[j]<<") ";
                for(int k=i;k<=j;k++){
                    cout<<arr[k]<<", ";
                }cout<<endl;
            }
            
        }


}
int main(){
int arr[]={8,10,23,48,79,7,4};
int n=sizeof(arr)/sizeof(arr[0]);
printsubarray(arr,n);
}