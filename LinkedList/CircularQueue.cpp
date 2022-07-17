#include<bits/stdc++.h>
#include "queuel.h"
using namespace std;

int main(){
        QUEUES q(5);
        q.push(5);
        q.push(4);
        q.push(3);
        q.push(2);
        q.push(8);
        q.pop();
        q.pop();
        q.push(33);
        while(!q.empty()){
            cout<<q.getfront()<<"  ";
            q.pop();
        }
}