#include <bits/stdc++.h>

using namespace std;
 
int beautifulFunction(int N){
   string a=to_string(N);
int total=0;
int count=0;
int i =a.length()-1;
while(i>0){
    int current =10- ((int)a[i]+0);
    total=total+current;
    i--;
    count=1;
}
total+=9;
return total;
 
}
int main(){
    int N;
    cin>>N;
    int result;
    result = beautifulFunction(N);
    cout<<result;
    return 0;
}