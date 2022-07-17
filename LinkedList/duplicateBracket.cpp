#include<bits/stdc++.h>
using namespace std;

bool duplicateParentheses(string str){
    int count=0;
    for(int i=0;i<=str.size();i++){
       
        if(count>2){
            return true;
        }
       else if(str[i]==')'){
            count++;
        }
        else{
            count=0;
        } 
    }
    return false;
}

int main(){
        string str="((a+b)+((c+d)))";
        cout<<duplicateParentheses(str);

}