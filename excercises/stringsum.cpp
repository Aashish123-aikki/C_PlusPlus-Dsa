#include<bits/stdc++.h>
using namespace std;

int main(){
    string a="1234";
    int i=0;
    char b[50] ;
    for(char x:a){
        b[i++]=x;
    }
    b[i]='\0';
    cout<<b<<endl;
    int ab=0;
    stringstream c(a);
    c>>ab;
    cout<<ab;
}