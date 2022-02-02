#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<math.h>
using namespace std;
 int binarytodecimal(string s){
     stringstream geek(s);
         int ss=0;
         geek>>ss;
     int dec=0;
     int count=0;
     while(ss!=0){
         int last=ss%10;
         dec=dec+(last*pow(2,count));
         count++;
         ss=ss/10;

     }
     return dec;
     }
// Function to convert binary to decimal
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1'){
            dec_value += base;
        base = base * 2;}
        else if(num[i]=='0'){
            base=base*2;
        }
    }
    return dec_value;
}   

 int main(){
     string s;
     cin>>s;
    cout<<"DEcimal Code: "<< binarytodecimal(s);
    cout<<"DEcimal Code: "<< binaryToDecimal(s);
 }