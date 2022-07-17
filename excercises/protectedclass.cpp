#include<bits/stdc++.h>
using namespace std;

class pen{
    protected :
    int price;

    public:
    void setprice(int pr){
        price=pr;
    }
    void getprice(){
        cout<<price<<endl;
    }
};
class quality : pen {
    public:
      void getp(){
          cout<<price<<endl;
      }
};
int main(){
    pen p;
    p.setprice(67);
    p.getprice();
    quality q;
    q.getp();
}