#include<bits/stdc++.h>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    // your code goes here

    int i=sr;
    int j=sc;
    int sum=0;
    while(i<=er and j<=ec){
            sum=sum+v[i][j];
            
            j++;
            if(j>ec){
                j=sc;
                i++;
            }
    }
    return sum;
}
// int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
//         int r=v.size();
//         vector<vector<int>> ve;
//         vector<int> vb;
//         int c=v.at(1).size();
//         int i=0;
//         int j=1;
//         int sum=v[0][0];
//         vb.push_back(sum);
//         while(i<r and j<c){
//                 sum+=v[i][j];
//                 ve[i][j]
//                 vb.push_back(sum);
//                 j++;
//                 if(j=c){
//                     i++;
//                     j=1;
//                     sum=v[i][0];
//                     ve.push_back(vb);
        
//                     vb.clear();
//                 }
//         }
//         int add=0;
       
//         return add;
// }

int main(){
    vector<vector<int>> v={{1,2,3,4,5},
                           {6,7,8,9,10},
                           {11,12,13,14,15},
                           {16,17,18,19,20}};
    int sr,sc,er,ec;
    cin>>sr>>sc>>er>>ec;
cout<< sum(v,sr,sc,er,ec);

}