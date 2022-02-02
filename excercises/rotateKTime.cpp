//*.... TO ROTATE A GIVEN ARRAY K-TIMES......//*
#include<iostream>
#include<vector> 
using namespace std;

vector<int> check(vector<int> arr,int k){
    vector<int> ar;
    int n=arr.size();
    k=k%arr.size();
    for(int i=0;i<n;i++){
            if(i<k){
                ar.push_back(arr[n+i-k]);
            }
            else{
                ar.push_back(arr[i-k]);
            }
    }
    return ar;
}
int main(){
    vector<int> arr={4,5,6,7,8,9};//{9,4,5,6,7,8} {8,9,4,5,6,7} {7,8,9,4,5,6} {2,5,8,4,9,7}
    int k;
    cout<<"How many times you want to rotatae the array: ";
    cin>>k;
    vector<int> result=check(arr,k);
    for(int x:result){
    cout<<x<<", ";
    }
}