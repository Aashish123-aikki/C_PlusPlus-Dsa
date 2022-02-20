#include<bits/stdc++.h>
using namespace std;
class pen{
        int id;
        char cast[13];
        string name,color;
        int price;

public:
pen(){}
    pen(pen &x){
            id=x.id;
            name=x.name;
            color=x.color;
            price=x.price;
           strcpy(this->cast,x.cast);
    }
    pen(int id,string name,string color,int price,char castj[13]){
   
        strcpy(this->cast,castj);
        this->id=id;
        this->color=color;
        this->price=price;
        this->name=name;
        
    }
    string setcast(char c[13]){
            strcpy(cast,c);
    }
    string getcast(){
        return this->cast;
    }
    string getcolor(){
        return this->color;
    }
    string setcolor(string color){
        this->color=color;
    }
};
int main(){
    pen p1;
    char c[13]="general";
    pen p2(1,"Doms","Red",345,c);
    p1=p2;
    pen p(p2);
     pen p3=p2;
    p3.setcast("gupta");
    p1.setcolor("Green");
    char cv[13]="OBC";
    p1.setcast(cv);
    p.setcast("BC");
    cout<<p2.getcast()<<endl;
    cout<<p.getcast()<<" "<<p.getcolor()<<endl;
    cout<<p1.getcast();
   
}