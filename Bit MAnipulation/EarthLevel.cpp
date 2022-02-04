//Alien is at kth Level You are at ground find in how many minimim steps u can reach to him.....
#include<bits/stdc++.h>
using namespace std;
void earth(int k){
        int count=1;
        int powe=1<<1;
        while(k>powe){
            count++;
            powe=powe<<1;
        }
        cout<<count;
}

int main(){
        int k;
        cin>>k;
earth(k);
}