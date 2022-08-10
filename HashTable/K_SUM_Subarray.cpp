#include<bits/stdc++.h>
using namespace std;
void sumArray(vector<int> a,int k){
    vector<pair<int,int>> rslt;
    int prefix[100];
    prefix[0]=a[0];
    for(int i=1;i<a.size();i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    for(int i=0;i<a.size();i++){
        for(int j=i;j<a.size();j++){
            int subaraysum=i>0?prefix[j]-prefix[i-1]:prefix[j];
        
        if(subaraysum==k){
            pair<int,int> p;
            p.first=i;
            p.second=j;
            rslt.push_back(p);
        }}
    }
   vector<int> s;
    for(auto x:rslt){
        s.push_back((x.second-x.first)+1);
    }
    sort(s.begin(),s.end());
    cout<<s.at(s.size()-1);
   
}
int main()
{
   vector<int>a={0,-2,1,2,3,4,5,15,10,5};
    sumArray(a,15);
    return 0;
}