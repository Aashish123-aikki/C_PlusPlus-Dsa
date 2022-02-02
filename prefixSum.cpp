//To find largest subbarry sum time complexity o(N^2) using prefix sum
#include<iostream>
using namespace std;

int printsubarray(int arr[],int n){
    int prefix[100]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
int largest=0;
        for(int i=0;i<n;i++){
            for (int j = i; j < n; j++)
            { int subbary=0;
               
               subbary=i>0? prefix[j]-prefix[i-1]:prefix[j];
                largest=max(subbary,largest);
            }
            
        }

return largest;
}
int main(){
int arr[]={-2,3,4,-1,5,-12,6,1,3};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"The largest subarray sum is: "<<printsubarray(arr,n);
}