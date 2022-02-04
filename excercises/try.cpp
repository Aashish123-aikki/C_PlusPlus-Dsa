#include <bits/stdc++.h>

using namespace std;
 vector<int> r;
int count=0;
bool contain(vector<int> a,int n){
    for(int i=0;i<a.size();i++){
        if(a[i]==n){
            return 1;
        }
    }
    return 0;
}
int beautifulFunction(int N){
   
    if(contain(r,N)==1){
        return ;
    }
    else{
        r.push_back(N);
        N++;
        string ab=tostring(N);
        ab.erase(remove(ab.begin(),ab.end(),"0"));
        stringstream ss(ab);
        ss>>ab;
        count++;
        beautifulFunction(N);
    }
    
    return count;
 
}
int main(){
    int N;
    cin>>N;
    int result;
    result = beautifulFunction(N);
    cout<<result;
    return 0;
}