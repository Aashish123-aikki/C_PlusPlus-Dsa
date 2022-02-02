#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[566];
    int n;
    cout<<"how no. of strings: ";
    cin>>n;
    cout<<endl;
    cin.get();
    int largest=0;
    char larg[566];
    while(n--){
        cin.getline(a,566);
        int length=strlen(a);
        if(length>largest){
            largest=length;
            strcpy(larg,a);
        }
    }
    cout<<"string was: "<<a<<endl;
    cout<<"largest is: "<<larg;

}