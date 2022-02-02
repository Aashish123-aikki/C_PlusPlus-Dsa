#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int m=n-1;
    if((n&m)==0){
        cout<<"It's in the power of 2";
    }else{
        cout<<"Not In Power of 2";
    }
}