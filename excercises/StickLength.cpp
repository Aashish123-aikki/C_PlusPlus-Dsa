#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sortingstick(vector<int> length,int k){
 sort(length.begin(), length.end());
    int res = 0;

    for(int i=0; i<length.size()-1; i++)
    {
        if (length[i + 1] - length[i] <= k) { res++; i++;}
    }
    return res;
}

int main(){
    vector<int> a={1,5,3,9,4,10}; //{1,3,4,5,9,10}
    int x;
    cout<<"Enter length difference: ";
    cin>>x;
    cout<<endl;
    cout<<sortingstick(a,x);
}