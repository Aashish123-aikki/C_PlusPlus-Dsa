#include<bits/stdc++.h>
using namespace std;
//top to bottom approach...
int knapsack(int wt[],int price[],int N,int W){
    if(N==0 or W==0){
        return 0;
    }
    int inc=0;
    int exc=0;
    if(wt[N-1]<=W){
        inc=price[N-1]+knapsack(wt,price,N-1,W-wt[N-1]);
    }
    exc=knapsack(wt,price,N-1,W);
    return max(inc,exc);
}

//Bottom up Approach.......
int knapsac(int wt[],int price[],int N,int W){
    vector<vector<int>> dp(N+1,vector<int>(W+1,0));
    
    for(int n=1;n<=N;n++){
        for(int w=1;w<=W;w++){
            int inc=0;
            int exc=0;
            if(wt[n-1]<=w){
                inc=price[n-1]+dp[n-1][w-wt[n-1]];
            }
            exc=dp[n-1][w];
            dp[n][w]=max(inc,exc);
        }
    }
    return dp[N][W];
}
int main()
{   int wt[]={2,3,7,4};
    int pr[]={5,20,20,10};
    cout<<knapsack(wt,pr,4,11)<<endl;
    cout<<knapsac(wt,pr,4,11);
    return 0;
}