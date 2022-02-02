#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> v={{2,4},{1,8},{2,2}};
    sort(v.begin(),v.end());
    for(pair<int,int> x:v){
        cout<<"("<<x.first<<", "<<x.second<<"), ";
    } 
}