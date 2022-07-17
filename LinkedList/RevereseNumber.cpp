#include<bits/stdc++.h>
using namespace std;

int reversed(int n){
    stack<int> s;
    while(n!=0){
        int temp=n%10;
        s.push(temp);
        n=n/10;
    }
    int result=0;
    int ten=1;
    while(!s.empty()){
        int t=s.top();
        result=result+t*ten;
        ten=ten*10;
        s.pop();
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    cout<<reversed(n);
}