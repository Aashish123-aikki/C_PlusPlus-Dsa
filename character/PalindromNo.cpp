//*........To check Palindrome String....//*
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    char as[700];
    char a[700];
    cin>>as;
    int n=strlen(as);
    int j=0;
    for(int i=n-1;i>=0;i--){
        a[j]=as[i];
        j++;
    }
    a[j]='\0';
    cout<<"after Reversing: "<<a<<endl;
    
    if(strcmp(a,as)==0){
        cout<<"Yes String is Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}
