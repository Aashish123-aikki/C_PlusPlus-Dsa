#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int search;
    cin>>search;
    int midterm=n/2;
    
    int first=0;
    int end=n;
   while(first<=end){
    if(arr[midterm]==search){
        cout<<"number is present at index : "<<midterm;
            break;
    }
    else if(search>arr[midterm]){
        first=midterm+1;

    }else if(search<arr[midterm]){
        end=midterm-1;
    }else{
        cout<<"Number not found.";
    }
    midterm=(first+end)/2;
    }

}