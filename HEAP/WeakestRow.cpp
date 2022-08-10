#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<vector<int>> vec={{1,0,0,0},
                            {1,1,1,1},
                            {1,0,0,0},
                            {1,0,0,0}};
    
    
    int r=vec.size();int c=vec[0].size();
    vector<pair<int,int>> v(r);
        for(int i=0;i<r;i++){
            v[i].first=0;
            v[i].second=0;
        for(int j=0;j<c;j++){
                if(vec[i][j]==0){
                    v[i].first++;
                }else{
                    v[i].second++;
                }
          
        }
    }
    vector<pair<int,int>> rev(r);
    rev=v;
    sort(rev.begin(),rev.end());
    for(pair<int,int> x:rev){
        cout<<x.first<<" "<<x.second<<endl;
    }
    pair<int,int> pa;
    pa.first=0;
    pa.second=0;
    cout<<"INDEX: ";
    for(int i=0;i<2;i++){
        auto indx=find(v.begin(),v.end(),rev[rev.size()-i-1]);
        
        cout<<indx-v.begin()<<" ";
        swap(v.at(indx-v.begin()),pa);
    }


    // vector<unordered_map<int,int>> rslt;
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //             rslt[i][vec[i][j]]++;
          
    //     }
    // }
    // sort(rslt.begin(),rslt.end());
    // for(int i=rslt.size()-1;i>rslt.size()-2;i--){
    //         cout<<rslt[i][0]<<" "<<rslt[i][1];
    // }
map<string,vector<int>> mat;
mat["A"].push_back(256);
mat["A"].push_back(556564);
for(auto a:mat["A"]){
    cout<<a;
}
    return 0;
}