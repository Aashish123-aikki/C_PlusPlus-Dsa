#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
//...................To Compress the String..................//
string compress(string a){
    string b;
    
    for(int i=0;i<a.length();i++){
        while(i<a.length()-1 and a[i]==a[i+1]){   //{aabbccc}
            i++;
        }
        b=b+a[i];
        
    }
    return b;
}
//..................To Provide output........//
string check(string a){
        sort(a.begin(),a.end());
       return(compress(a));
}
int main(){
    string a;
    cin>>a;
    cout<<check(a);

}