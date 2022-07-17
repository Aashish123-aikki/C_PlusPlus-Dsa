#include<bits/stdc++.h>
#include "stackl.h"
using namespace std;

int main(){
    Stack<int> st;
    st.push(9);
    st.push(4);
    st.push(2);
    st.pop();
    cout<<st.top();

}