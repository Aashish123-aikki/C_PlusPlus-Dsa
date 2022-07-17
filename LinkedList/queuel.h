class QUEUES{
    int cs=0;
    int ms;
    int front=0;
    int rear=ms-1;
    int *arr;
    public :
    QUEUES(int size){
       arr =new int[size];
        ms=size;
    }
    bool fullqueue(){
        return cs==ms;
    }
    void push(int e){
        if(!fullqueue()){
            rear=(rear+1)%ms;
            arr[rear]=e;
            cs++;
        }
        
    }
    bool empty(){
        return cs==0;
    }

    void pop(){
        if(!empty()){
            front=(front+1)%ms;
            cs--;
        }
    }
    int getfront(){
        return arr[front];
    }
};