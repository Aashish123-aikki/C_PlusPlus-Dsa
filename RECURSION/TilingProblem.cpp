#include<bits/stdc++.h>
using namespace std;

int tiling(int n,int m){
   if(n<m){
       return 1;
   }
   else if(n==m){
       return 2;
   }
   int w1=tiling(n-1,m);
   int w2=tiling(n-m,m);
   return w1+w2;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<tiling(n,m);
}