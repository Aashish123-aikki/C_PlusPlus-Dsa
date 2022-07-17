#include<bits/stdc++.h>
using namespace std;

void inseratBottom(stack<int> &s,int n){
    if(s.empty()){
        s.push(n);
        return;
    }
    int temp=s.top();
    s.pop();
    inseratBottom(s,n);
    s.push(temp);

}
void revrse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    revrse(s);
    inseratBottom(s,temp);
}

int main(){
    stack<int> s;
    s.push(5);
    s.push(6);
    s.push(3);
    s.push(1);
    cout<<s.top();
    revrse(s);
   cout<<s.top();
}