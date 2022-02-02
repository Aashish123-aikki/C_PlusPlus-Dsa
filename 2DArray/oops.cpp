#include<iostream>
using namespace std;
 class student{
     public:
     int a,b;
    void swap(){
        int temp=a;
         a=b;
        b=temp;
        cout<<"roll: "<<a<<endl;
        cout<<"marks: "<<b<<endl;
    }
 };
int main(){
   int roll;
   int marks;
   cin>>roll>>marks;
   student st1;
   st1.a=roll;
   st1.b=marks;
  st1.swap();
  cout<<st1.a;
}