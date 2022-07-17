#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
void push(int a){
 
}
int main(){
 node* head;
 node* ptr;
 head=0;

 int i=0;

Label: 
 node* newnode=new node();
     cout<<"Enter data: ";
     cin>>newnode->data;
    
    newnode->next=0;
    if(head==0){  
        head=newnode;
        ptr=head;
    }else{
        ptr->next=newnode;
        ptr=newnode;

    }i++;
    if(i<4){
        
        goto Label;
   }
   
   
   else{
       while(head!=0){
           cout<<head->data<<" ";
           head=head->next;
       }
   }

}