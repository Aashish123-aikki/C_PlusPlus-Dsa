#include<bits/stdc++.h>
using namespace std;
void check(vector<vector<int>> a){
            vector<pair<int,int>> ab;
            for(int i=0;i<a.size();i++){
                for(int j=0;j<a.at(0).size();j++){
                    if(a[i][j]==0){
                        pair<int,int> p;
                        p.first=i;
                        p.second=j;
                        ab.push_back(p);
                    }
                }
            }
            vector<int> x;
            vector<int> y;
            //assigning zero pairs...
            for(int i=0;i<ab.size();i++){
               x.push_back( ab.at(i).first);
               y.push_back( ab.at(i).second);
            }
         sort(x.begin(),x.end());
         sort(y.begin(),y.end());
       
         //making row zero....
         for(int i=0;i<x.size();i++){
             int j=0;
             while(j<a.at(0).size()){
                a.at(x[i]).at(j)=0;
                j++;
                }
            
         }
        
         //making coloumn zero....
         for(int i=0;i<a.size();i++){
                for(int j=0;j<y.size();j++){
                    a[i][y[j]]=0;
                }
         }
         for(vector<int> z:a){
             for(int n:z){
                 cout<<n<<" ";
             }
             cout<<endl;
         }
          
}

int main(){
    vector<vector<int>> a={{1,2,3,4},
                           {5,0,6,7},
                           {0,9,7,8}};
    check(a);

}