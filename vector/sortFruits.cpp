#include<bits/stdc++.h>
using namespace std;
bool compare(pair<string,int> a,pair<string,int> b){
    return a.first<b.first;
}

int main(){
    vector<pair<string,int>> v={{"apple",100},{"mango",120},{"banana",60},{"guvava",70}};
    sort(v.begin(),v.end(),compare);
    for(pair<string,int> a:v){
        cout<<a.first<<" "<<a.second<<endl;
    }
}