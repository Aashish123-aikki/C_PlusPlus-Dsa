#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    
    int n = v.size();
    sort(v.begin(),v.end());
    for(pair<int,int> x:v){
        cout<<"("<<x.first<<", "<<x.second<<")";
    }
    
}
int main(){
        vector<pair<int,int>> a={{3,4},{2,3},{3,7},{1,5},{3,6}};
        sortCartesian(a);
}