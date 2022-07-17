template<typename T>
class node{
    public:
    T data;
    node<T> *next;
    node(T dat){
        data=dat;
    }
};

template<typename T>
class Stack{
    node<T> *head;
    public:
    Stack(){
        head= nullptr;
    }
    void push(T dat){
        node<T> *n=new node<T>(dat);
        n->next=head;
        head=n;
    }
    void pop(){
        node<T> *temp=head;
        head=head->next;
        delete temp;
    }
   bool empty(){
        return head==nullptr;
    }
    T top(){
        return head->data;
    }

};