#include<bits/stdc++.h>
using namespace std;
unordered_set<int> findpair(vector<int> a,vector<int>b){
    unordered_set<int> set;
        for(auto x:a){
            if(find(b.begin(),b.end(),x)!=b.end()){
                if(set.find(x)!=set.end()){
                
                }else{
                    set.insert(x);
                }
            }
        }
        return set;
}
int main()
{
    vector<int> a={1,2,2,1,4,5,6};
    vector<int> b={2,2,4,7,8,6};
    unordered_set<int> rslt=findpair(a,b);
    for(int x:rslt){
        cout<<x<<" ";
    }
    return 0;
}