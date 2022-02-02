#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &a){
    int sr=0;
    int sc=0;
    int er=a.size()-1;
    int ec=a[0].size()-1;
    //Finding Transpose......
  for(int i=0 ;i<er;i++){           
      for(int j=1+i;j<=ec;j++){
          swap(a[i][j],a[j][i]);
      }
  }
        //For anticlockwise rotation.....90'
//   while(i<er/2){                             
//       swap(a[i],a[er]);
//       er--;
//   }

//For clockwise rotation 90'.............
    for(int i=0;i<=(ec+1)/2;i++){
            for(int j=0;j<=er;j++){
                swap(a[j][i],a[j][ec]);
            }
            ec--;
    }
 
}
int main(){
    vector<vector<int>> a={{1, 2, 3, 11},
                           {4, 5, 6, 12},
                           {7, 8, 9, 13},
                           {14,15,16,17}};
    rotate(a);
//   rotate(a);
//   rotate(a);
  for(vector<int> x:a){
      for(int b:x){
          cout<<b<<" ";
      }
      cout<<endl;
  }
}