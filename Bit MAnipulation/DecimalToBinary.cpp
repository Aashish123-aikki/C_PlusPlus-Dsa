#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int p=1;
    int ans=0;
    while (a>0)
    {
        int lastbit=a&1;
        ans=ans+p*lastbit;
        p=p*10;
        a=a>>1;
    }
    cout<<ans;
    
}