#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int v){
        V=v;
        l=new list<int>[V];
    }
    void addEdge(int i,int j,bool undir=true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }
    void printGraph(){
        for(int i=0;i<V;i++){
            cout<<i<<"->>";
            for(auto y:l[i]){
                cout<<y<<",";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(3,4);
    g.printGraph();
   


    
    return 0;
}