#include<bits/stdc++.h>
using namespace std;
bool sortBYdesc(const pair<int,int> &a,const pair<int,int> &b){
    return a.first>b.first;
}
int main()
{
    vector<int> arr={5,2,3,4,1};
    vector<pair<int,int>> vec;
    vector<string> reslt(5);
    for(int i=0;i<arr.size();i++){
        pair<int,int> api;
        api.first=arr[i];
        api.second=i;
        vec.push_back(api);
        
    }
    sort(vec.begin(),vec.end(),sortBYdesc);
    for(int i=0;i<vec.size();i++){
        if(i==0){
            reslt[vec[i].second]="GOLD MEDAL";
        }else if(i==1){
            reslt[vec[i].second]="SILVER MEDAL";
        }else if(i==2){
            reslt[vec[i].second]="BRONZE MEDAL";
        }
        else{
            reslt[vec[i].second]=to_string(i+1)+"th";
        }
    }
    for(string x:reslt){
        cout<<x<<endl;
    }
    return 0;
}