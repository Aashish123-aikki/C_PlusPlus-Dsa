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
    void addEdge(int x,int y,bool undir=false){
        l[x].push_back(y);
        if(undir){
            l[y].push_back(x);
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
    bool checkKeyInRoom(){
        bool *isVisited=new bool[V]{0};
        isVisited[0]=true;
        set<int> q;
        for(auto x:l[0]){
            if(!isVisited[x]){
                q.insert(x);
                isVisited[x]=true;
            }
            
        }
        while(!q.empty()){
            auto it=q.begin();
            int node=*it;
            q.erase(it);
            for(auto x:l[node]){
                if(!isVisited[x]){
                    q.insert(x);
                    isVisited[x]=true;
                }
            }
        }
        for(int i=0;i<V;i++){
            if(isVisited[i]==false){
                return false;
               
            }
        }
        return true;
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,1);
    g.addEdge(1,0);
    g.addEdge(1,4);
    g.addEdge(2,2);
    g.addEdge(3,4);
    g.printGraph();
    cout<<endl;
    cout<<g.checkKeyInRoom();
    return 0;
}