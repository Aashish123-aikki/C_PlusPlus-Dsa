#include<bits/stdc++.h>
using namespace std;
class Graph{
    
    int V;
    list<pair<int,int>> *l; // In pair....first=neabhour...second=weight
    public:
    Graph(int v){
        V=v;
        l=new list<pair<int,int>>[V];
    }
    void addEdge(int x,int y,int weigh,bool undir=true){
        l[x].push_back({y,weigh});
        if(undir){
            l[y].push_back({x,weigh});
        }
    }
    int dijkastra(int source,int dest){
        vector<int> dis(V,INT_MAX);
        set<pair<int,int>> s;  //first=node.....second=weight
        dis[source]=0;
        s.insert({source,dis[source]});
        while(!s.empty()){
            auto it=s.begin();
            int node=it->first;
            int disTillNow=it->second;
            s.erase(it);
            for(auto nbrpair:l[node]){
                int nbr=nbrpair.first;
                int currentDis=nbrpair.second;
                if(currentDis+disTillNow<dis[nbr]){
                    //check whether this pair exist if so remove it
                    auto f=s.find({nbr,dis[nbr]});
                    if(f!=s.end()){
                        s.erase(f);
                    }
                    dis[nbr]=currentDis+disTillNow;
                    s.insert({nbr,dis[nbr]});
                }
            }
        }
        return dis[dest];
    }
};
int main()
{
    Graph g(6);
    g.addEdge(0,1,1);
    g.addEdge(0,2,4);
    g.addEdge(0,3,7);
    g.addEdge(1,2,1);
    g.addEdge(2,3,2);
    g.addEdge(3,4,3);
    cout<<g.dijkastra(0,4);
    return 0;
}