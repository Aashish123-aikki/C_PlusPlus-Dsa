#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a={2,3,4,5,6,78,8};
    a.pop_back();
    a.push_back(67);
a.push_back(87);
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
  
}