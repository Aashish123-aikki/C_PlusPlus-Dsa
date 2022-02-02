#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string compress(string a){
    string b;
    
    for(int i=0;i<a.length();i++){
        int count=0;
        while(i<a.length()-1 and a[i]==a[i+1]){   //{aabbccc}
            count++;
            i++;
        }
        b=b+a[i];
        b=b+to_string(count);
    }
    return b;
}
string check(string a,string b){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        compress(a);
        compress(b);
        if(a==b){
            return "Yes";
        }
        else{
            return "No";
        }
}
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    cout<<check(a,b);

}