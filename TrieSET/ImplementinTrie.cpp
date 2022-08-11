#include<bits/stdc++.h>
#include "trieSET.h"
using namespace std;
int main()
{
    string words[]={"m","hello","he","apple","ape","news","how","hell"};
    trieSET t;
    for(auto x:words){
        t.insert(x);
    }
    t.smallMatch("he");
   
    return 0;
}