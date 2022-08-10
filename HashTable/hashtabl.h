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
    
};

template<typename T>
class hashTABLE{
    Node<T>** table;
    int cs;
    int ts;
    int hashFUN(string k){
        int power=1;
        int sum=0;
        for(auto x:k){
            sum=(sum+power*x)%ts;
            power=(power*29)%ts;
        }
        return sum;
    }
    void rehash(){
        Node<T>** oldTable=table;
        int oldts=ts;
        cs=0;
        ts=2*ts+1;
        table=new Node<T>*[ts];
        for(int i=0;i<ts;i++){
            table[i]=NULL;
        }
        for(int i=0;i<oldts;i++){
            Node<T>* temp=oldTable[i];
            while(temp!=NULL){
                insert(temp->key,temp->value);
                temp=temp->next;
            }
            if(oldTable[i]!=NULL){
            delete temp;
            }
        }
        delete[] oldTable;
    }
    public:
    hashTABLE(int default_size=7){
        cs=0;
        ts=default_size;
        table=new Node<T>*[ts];
        for(int i=0;i<ts;i++){
            table[i]=NULL;
        }
    }
    void insert(string k,T val){
        int indx=hashFUN(k);
        Node<T>* n=new Node<T>(k,val);
        n->next=table[indx];
        table[indx]=n;
        cs++;
        float load_factor=cs/float(ts);
        if(load_factor>0.7){
            rehash();
        }
    }
    bool isPresent(string k){
        if(searchTable(k)!=NULL){
            return true;
        }
        false;
    }
    Node<int>* searchTable(string key){
        int indx=hashFUN(key);
        Node<T>* temp=table[indx];
        while(temp!=NULL){
                if(temp->key==key){
                    return temp;
                }
                temp=temp->next;
            }
       
        return NULL;
    }
    void erase(string ke){
        if(isPresent(ke)){
           
            int indx=hashFUN(ke);
           
            Node<T>* temp=table[indx];
            //when only 1 node attched and have next==NULL 
            if(temp->key==ke ){
                table[indx]=temp->next;
                delete temp;
                cs--;
                return;
            }
            //many node before deleting node but next node ==NULL
          
            while(temp!=NULL){
                if(temp->next->key==ke){
                    temp->next=temp->next->next;
                    cs--;
                    break;
                }
                temp=temp->next; 
                
                }
            }
            
            else{cout<<"NOT FOUND";}
                return;
    }
    void printTABLE(){
        for(int i=0;i<ts;i++){
            Node<T>* temp=table[i];
            cout<<"BUCKET :"<<i<<" ->";
            while(temp!=NULL){
                cout<<temp->key<<"->";
                temp=temp->next;
            }
            cout<<endl;
        }
    }  
};
                // else if(temp->key==ke and (temp->next!=NULL and temp!=prev)){

                //         prev->next=temp->next;
                //         cs--;
                //         delete temp;
                //         break;
                // }
                // else if(temp->key==ke and (temp->next!=NULL and prev==temp)){
                //         table[indx]=temp->next;
                //         delete temp;
                       
                //         cs--;
                //         break;
                // }