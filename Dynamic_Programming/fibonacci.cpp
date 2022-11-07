#include<bits/stdc++.h>
using namespace std;
int fibon(int a){    //Bottom down approach
    int dp[a]{0};
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<a;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[a-1];
}
int fib(int a,int dp[]){  //Top top Bottom approach.......fibonacci memoisation approach
    if(a==0 or a==1){
        return a;
    }
    if(dp[a]!=0){
        return dp[a];
    }
    return dp[a]=fib(a-1,dp)+fib(a-2,dp);
}
int main()
{
    cout<<fibon(8);
    int dp[8]{0};
    cout<<endl;
    cout<<fib(8,dp)<<" ";
    return 0;
}