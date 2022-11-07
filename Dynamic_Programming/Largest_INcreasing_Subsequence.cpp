#include<bits/stdc++.h>
using namespace std;
int largestsequence(vector<int> a){
    vector<int> dp(a.size(),1);
    int len=1;
    for(int i=1;i<a.size();i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                
                dp[i]=max(dp[i],1+dp[j]);
                len=max(len,dp[i]);
            }
        }
    }

    return len;
}
int main()
{
    vector<int> a={50,4,10,8,30,100};
    cout<<largestsequence(a);
    return 0;
}