//TO find all the occurance of the given nhmber in the array...
#include<bits/stdc++.h>
using namespace  std;
vector<int> vec;
void helper(vector<int> a,int k,int i){
    if(i==a.size()){
    return;
}//base condition...
    if(a[i]==k){
        vec.push_back(i);
    }
    helper(a,k,i+1);
    return;
}
vector<int> check(vector<int> a,int k){

    vec.clear();
    helper(a,k,0);
    return vec;
}

int main(){
        vector<int> a={6,7,8,9,76,7,8};
        int k ;
        cin>>k;
        vector<int> b=check(a,k);

for(int x:b){
            cout<<x<<" ";
        }
}