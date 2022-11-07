#include<bits/stdc++.h>
using namespace std;
//I wnat change of some coin e.g., 15rs change let's suppose we has list of coins{1,3,7,10}
//we will need 15 coins of 1 to get->15Rs       ....15coins needed
//we will need  1+1+1+3+3+3+3 ->15Rs           ...7coins needed
// we can 3+3+3+3+3  ->15Rs     .....5coins needed
//And many more ways 
//but way in which  minimum no. of coins needed will be 7+7+1 ->15Rs only 3 coind needed... 

//Bottom up Approach....
int coin_count(vector<int> &coins,int k){
        vector<int> dp(k+1,0);
        dp[0]=0;
        for(int i=1;i<=k;i++){
            dp[i]=INT_MAX;
            for(int c:coins){
                if(i-c>=0 and dp[i-c]!=INT_MAX){
                    dp[i]=min(dp[i],dp[i-c]+1);
                }
            }
        }
        return dp[k]==INT_MAX? -1 : dp[k];
}
int main()
{
    vector<int> coins={1,3,7,10};
    cout<<coin_count(coins,20);
    return 0;
}