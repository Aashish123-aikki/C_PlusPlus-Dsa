#include<bits/stdc++.h>
using namespace std;


int dectob(int a){
    int n=0;
    int p=1;
    while(a>0){
        n=n+((a&1)*p);
        p=p*10;
        a>>1;
    }
    return n;
}
vector<string> vec;


void helper(int n,int p){
     
if(n>p){
    return ;
}
  int bin=dectob(n);
  string str=to_string(bin);
  int i=0;
  bool isrepeat=false;
  while(i<str.length()-1){
    
      if(str[i]==str[i+1])
      {
          isrepeat=true;
      }
      i++;
  }
  if(isrepeat==false){
      vec.push_back(str);
  }
    helper(n+1,p);
}

vector<string> binary(int n){
     int p=pow(2,n);
     helper(0,p);
    return vec;
}
int main(){
    int n;
    cin>>n;
 vector<string> a=   binary(n);
 for(string x:a){
     cout<<x<<" ";
 }
}