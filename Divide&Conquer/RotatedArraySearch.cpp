#include<bits/stdc++.h>
using namespace std;

int sorting(vector<int> &a,int s,int e,int key){
   
    
   while(s<=e){
       int mid=(s+e)/2;
    if(a[mid]==key){
        return mid;
    }
    if(a[s]<=mid){
        if(key>=a[s] and key<=a[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    else{
        if(key>=a[mid] and key<=a[e]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }}
    return -1;
   
}
int main(){
    vector<int> a={4,5,6,7,1,2,3};
     int s=0;
    int e=a.size()-1;
    int key;
    cin>>key;
    cout<<sorting(a,s,e,key);
}