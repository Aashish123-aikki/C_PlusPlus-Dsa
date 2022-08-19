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
    vector<vector<int>> rslt;
    void dfshelper( vector<int> &path,vector<vector<int>> &ans,int start){
        path.push_back(start);
        if(start==V-1){
            ans.push_back(path);
        }
        for(auto x:l[start]){
            dfshelper(path,ans,x);
        }
        path.pop_back();
        return;
    }
    void dfs(int start){
        vector<int> path;
        vector<vector<int>> ans;
        dfshelper(path,ans,start);
        for(vector<int> x:ans){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }

    }
};
int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.printGraph();
    cout<<endl;
    g.dfs(0);



    
    return 0;
}