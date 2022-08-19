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
    void dfsHelper(int start,bool *visited){
        visited[start]=true;
        cout<<start<<",";
        for(auto x:l[start]){
            if(!visited[x]){
                dfsHelper(x,visited);
            }
        }
        return;
    }
    void dfs(int source){
        bool *visited=new bool[V]{0};
        dfsHelper(source,visited);
    }
};
int main()
{
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,5);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(3,4);
    g.printGraph();
   g.dfs(0);


    
    return 0;
}