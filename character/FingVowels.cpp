#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string checkVowels(string a){
    string b;
        for(int i=0;i<a.length();i++){
            if(a[i]=='a'|a[i]=='e'|a[i]=='i'|a[i]=='o'|a[i]=='u'){
                    b+=a[i];
            }
        }
        return b;
       
}

int main(){
    string a;
    getline(cin,a);
    cout<<"String You Entered: "<<a<<endl;
    cout<<"Vowel String: "<<checkVowels(a);
}