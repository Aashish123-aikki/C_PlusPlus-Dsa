#include<bits/stdc++.h>
using namespace std;
class car{
    int x,y;
    
    public:
    string key;
    car(string k,int x1,int y1){
        
        key=k;
        x=x1;
        y=y1;
    }
    int distance(){
        return x*x + y*y;
    }
};
class custCompare{
 public:

    bool operator()(car a,car b){
        return a.distance()<b.distance();
    }
};
void firstMinDistanceOf_Nth_cars(vector<car> cars,int k){
    priority_queue<car,vector<car>,custCompare> q(cars.begin(),cars.begin()+k);
  
        while (k<cars.size())
        {   auto car=q.top();
            if(cars[k].distance() < car.distance() ){
                q.pop();
                q.push(cars[k]);
            }
            k++;
        }
        vector<car> vec;
        while(!q.empty()){
            vec.push_back(q.top());
            q.pop();
        }
        reverse(vec.begin(),vec.end());
        for(auto car: vec){
            cout<<car.key<<" ";
        }
}
int main()
{
    vector<car> cars;
    car c1("C1",1,1);
    car c2("C2",2,1);
    car c3("C3",3,2);
    car c4("C4",0,1);
    car c5("C5",2,3);


    cars.push_back(c1);
    cars.push_back(c2);
    cars.push_back(c3);
    cars.push_back(c4);
    cars.push_back(c5);
firstMinDistanceOf_Nth_cars(cars,3);


    return 0;
}