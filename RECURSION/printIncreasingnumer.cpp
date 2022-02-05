#include<bits/stdc++.h>
using namespace std;

vector<int> vec;
int funt(int n){
    if(n==1){
       vec.push_back(1);
        return 1;
    }
    funt(n-1);
    vec.push_back(n);

}

vector<int> order(int n){
    vec.clear();
    funt(n);
    return vec;
}
int main(){
    int n;
    cin>>n;
    vector<int> a=order(n);
    for(int x:a){
        cout<<x<<" ";
    }
}