//To count set bits ......
#include<bits/stdc++.h>
using  namespace std;

void countBits(int &n){
    int count=0;
    while(n>2){
        n=n&(n-1);
        count++;
    }
    cout<<count;
}
int main(){
    int a;
    cin>>a;
    int count=0;
    while(a>0){
    if((a&1)==1){
        count++;
    }
    a=a>>1;
    }
    cout<<count;
}