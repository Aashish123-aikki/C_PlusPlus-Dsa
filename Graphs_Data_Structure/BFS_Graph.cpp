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
    void bfs(int source){
        queue<int> q;
        bool *isVisited=new bool[V]{0};
        
        q.push(source);
        isVisited[source]=true;
        while(!q.empty()){
            int value=q.front();
            cout<<value<<endl;
            q.pop();
            for(auto x:l[value]){
                if(!isVisited[x]){
                    q.push(x);
                    isVisited[x]=true;
                }
            }
        }
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,4);
    g.printGraph();
    cout<<endl;
    g.bfs(0);
   


    
    return 0;
}