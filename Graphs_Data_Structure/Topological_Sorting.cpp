//Used for only  ................DAG(Directed Acyclic GRAPH).........
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
    void addEdge(int i,int j,bool undir=false){
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
    void topologiacl(){
        vector<int> dependecy(V,0);
        for(int i=0;i<V;i++){
            for(auto x:l[i]){
                dependecy[x]++;
            }
        }
        //bfs.......
        queue<int> q;
        for(int i=0;i<V;i++){
            if(dependecy[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int start=q.front();
            cout<<start<<",";
            q.pop();
            for(auto x:l[start]){
                dependecy[x]--;
                if(dependecy[x]==0){
                    q.push(x);
                }
            }
        }
    }
};
int main()
{
    Graph g(7);
    g.addEdge(0,1,false);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,5);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(3,4);
    g.printGraph();
    cout<<endl;
    g.topologiacl();
   


    
    return 0;
}