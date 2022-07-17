#include<bits/stdc++.h>
using namespace std;
int main(){
   int x=10;
   int y=20;
   int *ptr;
   ptr=&x;
   *ptr=12;
   *ptr++;
   cout<<*ptr<<"  "<<ptr<<" "<<x;

        
}