#include<bits/stdc++.h>
using namespace std;

int main(){
    string a="{{{]}}}";
    char ar[a.size()+1];
    strcpy(ar,a.c_str());
    string b;
    for(int i=0;i<a.size();i++){ char bc=ar[i];
        if(ar[i]== '{' |ar[i]=='[' | ar[i]=='('){
            b=b+ar[i];
        }
       
       else if(bc=='}' and b[b.length()-1]=='{'){
            b.pop_back();
        }
        else if(bc==']' and b[b.length()-1]=='['){
            b.pop_back();
        }
        else if(bc==')' and b[b.length()-1]=='('){
            b.pop_back();
        }
        else{
            cout<<i+1;
            break;
        }
      
    }   
    if(b.length()==0){
        cout<<"True";
    }
 
}