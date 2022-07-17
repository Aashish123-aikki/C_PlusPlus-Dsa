#include<bits/stdc++.h>
using namespace std;
class st{
    int top;
    queue<int> q1,q2;

    public:
    void push(int e){
        if(q1.empty()){
            q1.push(e);
        }
        else{
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            q1.push(e);
            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
        }
    }
    bool empty(){
        return q1.empty();
    }
    void pop(){
        q1.pop();
    }
    int getfront(){
        return q1.front();
    }
};
int main(){
        st a;
        a.push(8);
        a.push(9);
        a.push(4);
        a.push(3);
        a.pop();
        a.push(2);
        while(!a.empty()){
            cout<<a.getfront()<<" ";
            a.pop();
        }
}