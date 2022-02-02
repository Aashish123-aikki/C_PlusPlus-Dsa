#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int defk(vector<pair<int,int>> v,int w,int h){
    vector<int> a,b;
    a.push_back(0);
    b.push_back(0);
   
    for(int i=0;i<v.size();i++){
            a.push_back(v.at(i).first);
            b.push_back(v.at(i).second);

    }
    a.push_back(w+1);
    b.push_back(h+1);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    // find max hight and width...
    int mw=0;
    int mh=0;
    for(int i=0;i<a.size();i++){
        mw=max(mw,(a[i+1]-a[i]-1));
       
        mh=max(mh,b[i+1]-b[i]-1);
        
    }
    return (mw*mh);
}

int main(){
    vector<pair<int,int>> a={{3,8},{11,2},{8,6}};
    cout<<"enter width and height"<<endl;
    int w,h;
    cin>>w>>h;
    cout<<"Penelty: "<<defk(a,w,h);
}