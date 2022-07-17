#include<iostream>
#include<vector>
using namespace std;
int chec(int a){
    
    vector<vector<int>> vec;
    int pascal=1;
    
    for(int i=0;i<a;i++){
        vector<int> v;
        int n=pascal;
        while(n!=0){
            v.push_back(n%10);
            n=n/10;
        }
       vec.push_back(v);
        pascal=pascal*11;
      
    }
    for(int i=0;i<a;i++){
        
        for(int j=0;j<a-i;j++){
            cout<<" ";
        }
        for(int x:vec[i]){
            cout<<x<<" ";
        }
        cout<<endl;
            }
    
}

int main(){
    int a;
    cout<<"Enter pascal triangular limit: ";
    cin>>a;
    cout<<endl;
    chec(a);
    // vector<vector<int>> b=chec(a);
    // 
    
}