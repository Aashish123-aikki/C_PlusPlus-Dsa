#include<iostream>
#include<vector>
using namespace std;
void countsort(int arr[],int n){
    int lar=0;
    //finding largest element.......
    for(int i=0;i<n;i++){
        lar=max(lar,arr[i]);
    }

    //creating frequency array....
    vector<int> a(lar+1,0);
    for(int i=0;i<n;i++){
        a[arr[i]]++;
    }
    

    //sorting array......
    int j=0;
    for(int i=0;i<=lar;i++){
            while(a[i]>0){
                arr[j]=i;
                j++;
                a[i]--;
            }
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
}
int main(){
    int arr[]={3,4,5,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    countsort(arr,n);
}