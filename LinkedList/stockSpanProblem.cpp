#include<bits/stdc++.h>
using namespace std;

vector<int> stockSpanner(vector<int> &stocks){
    vector<int> result;
	for(int i=0;i<stocks.size();i++){
            int sum=1;
            int j=0;
            while(j<i){
                if(stocks[j]<stocks[i]){
                    sum++;
                }
                j++;
            }
            result.push_back(sum);
    }
    return result;
}

int main(){
    vector<int> v={100,80,60,70,60,75,85};
    vector<int> r=stockSpanner(v);
    for(int x:r){
        cout<<x<<" ";
    }
}