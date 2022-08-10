#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={22,4,5,6,7,8};
    int s=*max_element(arr.begin(),arr.end());
    vector<int> arry(s,0);
    for(int i=0;i<arr.size();i++){
        arry[arr[i]]++;
    }
    sort(arry.begin(),arry.end(),greater<int>());
    int size=arr.size();
    int n=arry[0];
    int count=1;
    while(n<size/2){
        n+=arry[count];
        count++;
    }
    cout<<count;
    return 0;
}