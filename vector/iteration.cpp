#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,5,6,7,8};
    vector<int>::iterator it=find(v.begin(),v.end(),8);
    
    if(it!=v.end()){
        cout<<"Present at: "<<it-v.begin()<<endl;
    }else{
        cout<<"not found";
    }
}