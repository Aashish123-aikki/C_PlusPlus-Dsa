#include<bits/stdc++.h>
using namespace std;
void getBit(int &n,int i){
    int s=1<<i;
    cout<<(n&s);
}
void setBit(int &n,int i){
     int s=1<<i;
     cout<<(n|s);
    
}
void clearBit(int &n,int i){
     int s=~(1<<i);
     n=(n&s);
}

//UpdateBit....
void updateBit(int &n,int i, int va){
    clearBit(n,i);
    int mas=va<<i;
    n=n|mas;

}
//Clear Last ith bit....
void clearlastIthBits(int &n,int i){
        int mask=-1<<i;
        cout<<(n&mask);
}
//Clear Range of bits...
void clearRangeOfBits(int &n,int i,int j){
    int a=-1<<j+1;
    int b=1<<i-1;
    int mask=a|b;
    n=(n&mask);
}
//ToReplace Bits....
void replaceBits(int &n,int i,int j,int m){
    clearRangeOfBits(n,i,j);
    int mask=m<<i;
    cout<<(n|mask);
}
int main(){
    int n,i,val,m;
    cin>>n>>i>>val>>m;
   replaceBits(n,i,val,m);
    }
  