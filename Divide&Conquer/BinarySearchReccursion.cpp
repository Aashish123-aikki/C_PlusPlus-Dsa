#include<bits/stdc++.h>
using namespace std;

int binarysrc(vector<int> &a,int s,int e,int key){
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if(a[mid]==key){
        return mid;
    }else if(a[mid]>key){
        binarysrc(a,s,mid-1,key);
    }
    else{
        binarysrc(a,mid+1,e,key);
    }
}
int main(){
        vector<int> a={2,3,4,5,6,7,8};
        int s=0,e=a.size()-1;
        int key;
        cin>>key;
        cout<<binarysrc(a,s,e,key);
}