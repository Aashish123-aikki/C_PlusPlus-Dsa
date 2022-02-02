#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    int n=5;
    vector<string> arr;
    while(n--){
        getline(cin,s);
        arr.push_back(s);
    }
    for(string a:arr){
        cout<<a<<", ";
    }
}