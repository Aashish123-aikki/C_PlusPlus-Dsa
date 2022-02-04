//find number which is not repeated in the list...
#include<bits/stdc++.h>
using  namespace std;
int main(){
    int a[] ={1,2,1,3,2,4,3};
    sort(a,a+sizeof(a)/sizeof(a[0]));
    for(int i=0;i<sizeof(a);i++){
        if(a[i]!=a[i+1]){
            cout<<a[i];
            break;
        }
        i++;
    }
}