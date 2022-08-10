#include<string>                                                
#include<iostream>
using namespace std;
template<typename T>
class Node{
    public:
    string key;
    T value;
    Node* next;

    Node(string key,T value){
        this->key=key;
        this->value=value;
        next=NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }
};

template<typename T>
class Hashtable{
    Node<T>** table;
    int cs;
    int ts;
    int hashFun(string key){
        int indx=0;
        int power=1;
        for(auto ch: key){
            indx=(indx+ch*power)%ts;
            power=(power*29)%ts;
        }
        return indx;
    }
    void rehash(){
        Node<T>** oldTable=table;
        int oldTS=ts;
        cs=0;
        ts=2*ts+1;
        table=new Node<T>*[ts];
        for(int i=0;i<ts;i++){
            table[i]=NULL;
        }
        for(int i=0;i<oldTS;i++){
            Node<T>* n=oldTable[i];
            while(n!=NULL){
            T valu=n->value;
            string k=n->key;
            n=n->next;
            insert(k,valu);}
            
            if(oldTable[i]!=NULL){
                delete oldTable[i];
            }
        }
        delete[] oldTable;
    }
    
    public:
    Hashtable(int default_size=7){
        cs=0;
        ts=default_size;
        table=new Node<T>*[ts];

       for(int i=0;i<ts;i++){
           table[i]=NULL;
       } 
    }
    
    void insert(string key,T value){
        int indx=hashFun(key);
        Node<T>* n=new Node<T>(key,value);
        n->next=table[indx];
        table[indx]=n;
        cs++;
        float load_factor=cs/float(ts);
        if(load_factor>0.7){
            rehash();
        }
    }
 
    void printTable(){
        for(int i=0;i<ts;i++){
            cout<<"Bucket "<<i<<"->";
            Node<T>* temp=table[i];
            while(temp!=NULL){
                cout<<temp->key<<"->";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};