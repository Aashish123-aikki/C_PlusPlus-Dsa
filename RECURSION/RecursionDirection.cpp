#include<bits/stdc++.h>
using namespace std;

//In decreasing manner....
int print(int n){
    if(n==1){
        cout<<1;
        return 1;
    }cout<<n;
        print(n-1);
   return n;
}

//In Increasing order...
int printIncre(int n,int p){
   if(n==p){
        cout<<1;
        return 1;
    }
        printIncre(n,p+1);
        cout<<n-p+1;
   return n;
}
int main(){
    int n;
    cin>>n;
    print(n);
    cout<<endl;
    printIncre(n,1);

}