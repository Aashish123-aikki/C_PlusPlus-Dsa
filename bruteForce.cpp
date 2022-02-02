//To find largest subbarry sum time complexity o(N^3)
#include<iostream>
using namespace std;

int printsubarray(int arr[],int n){
int largest=0;
        for(int i=0;i<n;i++){
            for (int j = i; j < n; j++)
            { int subbary=0;
                // cout<<"("<<arr[i]<<","<<arr[j]<<") ";
                for(int k=i;k<=j;k++){
                    subbary+=arr[k];
                    cout<<arr[k]<<", ";
                    
                }
                cout<<"Sum is: "<<subbary<<"  ";
                largest=max(subbary,largest);
                cout<<endl;
            }
            
        }

return largest;
}
int main(){
int arr[]={-2,3,4,-1,5,-12,6,1,3};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"The largest subarray sum is: "<<printsubarray(arr,n);
}