#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[]={'f','h','d','\0'};
    char b;
    
    b=cin.get();
    int digits=0;
    int alpha=0;
    int spaces=0;
    while(b!='\n'){      //........To count no of digits,alphabets and spaces......//
        if(b>=0 and b<=9){
            digits++;
        }
        else if(b>='a' and b<='z' or b>='A' and b<='Z'){
            alpha++;
        }
        else if(b==' ' or b=='\t'){
            spaces++;
        }
        
        b=cin.get();
    }
    cout<<"alphabets: "<<alpha<<endl;
    cout<<"digits: "<<digits<<endl;
    cout<<"spaces: "<<spaces<<endl;
}