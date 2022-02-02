//*........To FIND LOWER BOUND IN AN ARRAY.........//*

// #include<iostream>
// using namespace std;

// int lowerbound(int arr[],int val,int n){
//     int midterm=n/2;
//       int first=0;
//     int end=n;
//     int a=0;
//    while(first<=end){
//     if(arr[midterm]==val){
//         cout<<"number is present at index : "<<midterm;
//         a=1;
//             break;
//     }
//     else if(val>arr[midterm]){
//         first=midterm+1;

//     }else if(val<arr[midterm]){
//         end=midterm-1;
//     }else{
//         cout<<"Number not found.";
//     }
//     midterm=(first+end)/2;
//     }
//      if(a!=1){
//          if(val>arr[0]&val<arr[n-1]){
//  for(int i=0;i<n;i++){
          
//             if(arr[i]>val){
//                 cout<<"Value is : "<<arr[i-1];
//                 break;
//             }}}else{
//                 cout<<"Not Valid Input";
//             }
//      }

// }

// int main(){
//     int arr[]={3,4,5,67,89};
//     int val;
//     cout<<"enter value for lower bound: ";
//     cin>>val;
//     int n=sizeof(arr)/sizeof(arr[0]);
//         lowerbound(arr,val,n);
// }
   
//Expected Time Complexity: O(logN)
//Hint: Binary Search


#include<bits/stdc++.h>
#include<vector>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    
    int sz = A.size();
    int l = 0, r = (sz-1);
    int answer = -1;
    
    while (l <= r) {
        int mid = (l + r) / 2;
        if (A[mid] > Val) {
            r = mid-1;
        }
        else {
            answer = A[mid];
            l = mid+1;
        }
    }
    
    return answer;
    
}
int main(){
    vector<int> arr={1,2,3,4,5,6,89,74};
    int val;
    cin>>val;
    cout<<lowerBound(arr,val);
}