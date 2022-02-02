#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
        return a>b;
}
bool compare1(int a,int b){
        return a<b;
}
//selection sort...
void selesctionsort(vector<int> a){
    for(int i=0;i<a.size()-1;i++){
        int min=i;
        for(int j=i;j<a.size();j++){
                if(a[j]<a[min]){
                    min=j;
                }
        }swap(a[i],a[min]);
    }
      for(int x:a){
         cout<<x<<", ";
     }
}
void sorting(vector<int> a,bool flag){
    if(flag==1){
     sort(a.begin(),a.end(),compare);
     }
     else{
         sort(a.begin(),a.end(),compare1);
     }
     for(int x:a){
         cout<<x<<", ";
     }

}

int main(){
    vector<int> a={5,6,8,2,7,9};
    bool flag;
    
    // sorting(a,flag);
    selesctionsort(a);
}