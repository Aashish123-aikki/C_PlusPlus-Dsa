//given two arrays  sum and query. sum= {1,2,3,4}, Query={5,3,8}  check for every Q[i] elements if ...
//  subbrarray of sumArray whose sum is equal to q[i] element.   answer={Yes,Yes,}

#include<bits/stdc++.h>
using namespace std;

vector<bool> subsetSum(vector<int> v, vector<int> q)
{
    int n = q.size();
    vector<bool> b(n);
   
    bitset<10000> bit;
    bit.reset();
    bit[0] = 1;
  
    
  
    for (int i = 0; i < v.size(); ++i)
        bit |= (bit << v[i]);
        
    for(int i=0; i<n; i++)
    {
        int x = q[i];
        // bit[x]? b[i]=true : b[i]=false;
        if(bit[x]==1){
            b[i]=true;
        }else{
            b[i]=false;
        }


    }
    
    return b;
}
int main(){
  vector<int> a={1,2,3,4};
    vector<int> q={5,98,99};
    for(bool x:subsetSum(a,q)){
        cout<<x<<" ";
        }
    
}