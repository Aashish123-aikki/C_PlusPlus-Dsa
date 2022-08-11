#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

class Node{
    public:
    char ch;
    unordered_map<char,Node*> next;
    bool isTerminated;

    Node(char ch){
        this->ch=ch;
        isTerminated=false;
    }
};

class trieSET{
 public:
    Node* root;
    trieSET(){
        root=new Node('\0');
    }
    //Insertion
    void insert(string word){
        Node* temp=root;
        for(char c:word){
            if(temp->next.count(c)==0){
                Node* n=new Node(c);
                temp->next[c]=n;
            }
            temp=temp->next[c];
        }
        temp->isTerminated=true;
    }
    //searching
    bool isPresent(string word){
        Node* temp=root;
        for(char c:word){
            if(temp->next.count(c)==0){
                return false;
            }
            temp=temp->next[c];
        }
        if(temp->isTerminated==false){
            return false;
        }
        return true;
    }
    
        void dfs(Node* temp,vector<string> &rslt,string word ){
            if(temp->isTerminated==true){
                rslt.push_back(word);
            }
            if(temp->next.empty()){
                return;
            }
            for(auto p:temp->next){
                word.push_back(p.first);
                dfs(temp->next[p.first],rslt,word);
                word.pop_back();
            }
            return;
            
        }
    //check all string containing small strings
    vector<string> smallMatch(string smallString){
        Node* temp=root;
        vector<string> rslt;
        string add="";
        for(auto c:smallString)   {
            if(temp->next.count(c)!=0){
                add=add+c;
                temp=temp->next[c];
            }else{
                return rslt;
            }
        }
        dfs(temp,rslt,add);
       sort(rslt.begin(),rslt.end());
       for(auto x:rslt){
        cout<<x<<" ";
       }
    }
};