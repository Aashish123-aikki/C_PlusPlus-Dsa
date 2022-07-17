#include<bits/stdc++.h>
using namespace std;
class node{
   
   

    public:
     int data;
     node * next;
    node(int d):data(d),next(0){
      
    }
    
};
class list1{
    node *head;
    node *ptr;
    int size=0;
    public:

    list1():head(0),ptr(0){}
    
    void push(int data){
        if(head==0){
            size++;
            node* n=new node(data);
            head=ptr=n;
            return;
        }else{
            size++;
            node * n=new node(data);
            ptr->next=n;
            ptr=n;
        }
    }
    void print(){
        while(head!=0){
            cout<<head->data<<" ";
            head=head->next; 
        }
    }
    void size1(){
        cout<< size;
    }
    void getelement(int k){
        int n;
        node *temp=head;
        for(int i=0;i<=k;i++){
            n=temp->data;
            temp=temp->next;
        }
        cout<<n<<endl;
    }
    node* getnodeadres(){
        return head;
    }
};

//merging 2linked lists......
void add(node* s1,node* s2){
    
    node* temp1;
    node* temp2;
    while(s1!=0 | s2!=0){
    temp1=s1->next;
    temp2=s2->next;
    s1->next=s2;
    s2->next=temp1;
    s1=temp1;
    s2=temp2;
     }

    return; 
   
}
void sortlist(node* s){
    node* i=s;
    node* j ;
    while(i!=0){
    //   cout<<"in i ";
     j=i->next;
        while(j!=0){
            // cout<<i->data<<" "<<j->data<<"   ";
            if(i->data>j->data){
               
                swap(i->data,j->data);
            }
            j=j->next;
        }
        i=i->next;
       
    }
    while(s!=0){
        cout<<s->data<<" ";
        s=s->next;
    }

}
int main(){
  list1 l;
    l.push(1);
    l.push(3);
    l.push(4);
    l.push(5);
    l.push(6);
    l.push(7);

     list1 l2;
    l2.push(8);
    l2.push(9);
    l2.push(10);
    l2.push(11);
    l2.push(12);
    l2.push(14);
    node* s=l.getnodeadres();
    node* so=l.getnodeadres();
    add(l.getnodeadres(),l2.getnodeadres());

    while(s!=0){
    cout<<s->data<<" ";
    s=s->next;
    
} 
cout<<endl;
sortlist(so);
}