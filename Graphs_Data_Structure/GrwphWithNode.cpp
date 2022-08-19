#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    string city;
    list<string> n;
    Node(string c){
        city=c;
    }
};
class Graph{
    unordered_map<string,Node*> m;
    public:
    Graph(vector<string> cities){
        for(string a:cities){
            m[a]=new Node(a);
        }
    }
    void addEdge(string a,string b,bool undir=false){
        m[a]->n.push_back(b);
        if(undir){
            m[b]->n.push_back(a);
        }
    }
    void printgraph(){
        for(auto citypair:m){
            auto city=citypair.first;
            auto nod=citypair.second->n;
            cout<<city<<"->> ";
            for(auto x:nod){
                cout<<x<<"->> ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    vector<string> cities={"delhi","Newyork","paris","London"};
    Graph g(cities);
    g.addEdge("delhi","London",true);
    g.addEdge("delhi","paris");
    g.addEdge("paris","Newyork");
    g.addEdge("Newyork","London");
    g.printgraph();
    return 0;
}