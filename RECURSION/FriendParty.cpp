#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int arr(int n){
    if(n==0){
        return 1;
    }
  arr(n-1);
    vec.push_back(n);
   
}
int check(int n){
    arr(n);
    int count=0;
       for(int i=0;i<vec.size()-1;i++){
           for(int j=i+1;j<vec.size();j++){
                count++;
           }     
       }
    return count+1;
}
int main(){
    int n;
    cin>>n;
    cout<<check(n);
}