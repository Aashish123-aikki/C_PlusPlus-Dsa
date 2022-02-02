//find  power of a number.....
#include<bits/stdc++.h>
using namespace std;

void fastex(int a,int p){
    int ans=1;
    while(p>0){
        int lastbit=p&1;
        if(lastbit){
            ans=ans*a;
        }
        a=a*a;
        p=p>>1;
    }
    cout<<ans;
}
int main(){
    int a,n;
    cin>>a>>n;
    fastex(a,n);
}