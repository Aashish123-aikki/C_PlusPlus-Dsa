#include<bits/stdc++.h>
using namespace std;
 
int getMaxArea(vector<int> hist){
    vector<int> result;
    for(int i=1;i<hist.size()-1;i++){
        if(hist[i]<hist[i-1] and hist[i]<hist[i+1]){
            result.push_back(hist[i]*3);
        }
    }
    sort(result.begin(),result.end());
    return result[result.size()-1];
}
int main(){
    vector<int> re={6,2,5,4,5,1,6};
    cout<<getMaxArea(re);
}