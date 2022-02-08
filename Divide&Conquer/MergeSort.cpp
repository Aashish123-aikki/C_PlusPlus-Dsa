#include<bits/stdc++.h>
using namespace std;
void sort(vector<int> &arr,int s,int e){
    int m=(s+e)/2;
    int i=s;
    int j=m+1;
    vector<int> temp;
    while(i<=m and j<=e){
            if(arr[i]<arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
    }
    while(i<=m){
        temp.push_back(arr[i++]);
    }
    while(j<=e){
        temp.push_back(arr[j++]);
    }
    int k=0;
    for(int z=s;z<=e;z++){
        arr[z]=temp[k++];
    }
}

void mergesor(vector<int> &arr,int s,int e){
    if(s>=e){
        return;
    }
    int m=(s+e)/2;
    mergesor(arr,s,m);
    mergesor(arr,m+1,e);

    return sort(arr,s,e);
}
int main(){
    vector<int> arr={4,3,5,1,9,8};
    int s=0;int e=arr.size()-1;
    mergesor(arr,s,e);
    for(int x:arr){
        cout<<x<<" ";
    }

}