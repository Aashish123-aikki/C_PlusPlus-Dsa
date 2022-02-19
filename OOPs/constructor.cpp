#include<bits/stdc++.h>
using namespace std;
class pen{
        int id;
        string name,color;
        int price;

public:
    pen(){

    }
    pen(int id,string name,string color,int price){
        this->id=id;
        this->color=color;
        this->price=price;
        this->name=name;
    }
    string getcolor(){
        return color;
    }
    string setcolor(string color){
        this->color=color;
    }
};
int main(){
    pen p1;
    pen p2(1,"Doms","Red",345);
    p1=p2;
    p1.setcolor("Green");
    
    cout<<p2.getcolor();
    
    cout<<p1.getcolor();
}