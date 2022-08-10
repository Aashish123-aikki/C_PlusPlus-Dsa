#include<bits/stdc++.h>
using namespace std;

class car{
    int price;
    string model;
    public :
    car(int pri,string mod){
        price=pri;
        model=mod;
    }
   void show(){
        cout<<price;
    }
    
};
class company : private car{
    int model1;
    int price1;
    public:
    void setprice(int price){
            price1=price;
    }
    void setmodel(int model){
        model1=model;
    }
    void show(){
        cout<< price1;
        
    }
   
};

int main()
{
    
    company c;
    // cm.setmodel(2019);
    // cm().setprice(40000);
    // cm().show();

    return 0;
}