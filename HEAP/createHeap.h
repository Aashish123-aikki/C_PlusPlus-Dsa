#include<vector>
using namespace std;

class Heap{
    vector<int> v;
    bool type;
    void helper(int i){ // for minHeap POP
        int left =2*i;
        int right=(2*i)+1;
        if(type){
        if(left<v.size() and right<v.size() and v[left]<v[i] and v[right]<v[i]){
                if(v[left]<v[right]){
                    swap(v[left],v[i]);
            helper(left);
                }else{
                    swap(v[right],v[i]);
                    helper(right);
                }
        }
       else if(left<v.size() and v[left]<v[i]){
            swap(v[left],v[i]);
            helper(left);
        }
        else if(right<v.size() and v[right]<v[i]){
            swap(v[right],v[i]);
            helper(right);
        }
    }
    else if(!type){  //for MaxHeap POP....
        if(left<v.size() and right<v.size() and v[left]>v[i] and v[right]>v[i]){
                if(v[left]>v[right]){
                    swap(v[left],v[i]);
            helper(left);
                }else{
                    swap(v[right],v[i]);
                    helper(right);
                }
        }
       else if(left<v.size() and v[left]>v[i]){
            swap(v[left],v[i]);
            helper(left);
        }
        else if(right<v.size() and v[right]>v[i]){
            swap(v[right],v[i]);
            helper(right);
        }
    }
    }//helper end
    public:
    //creating Heap............................................//
    Heap(int sizeOfHeap,bool ty){     // (true: for MinHeap) ,    (false: for MaxHeap)
        type=ty;
        v.reserve(sizeOfHeap+1);
        v.push_back(-1);
    }

    void push(int d){
        v.push_back(d);
        int indx=v.size()-1;
        int parent=indx/2;
        if(type){
        while(indx>1 and v[parent]>v[indx]){
            swap(v[parent],v[indx]);
            indx=parent;
            parent=indx/2;
        }     //for minHeap....
    }else if(!type){
        while(indx>1 and v[parent]<v[indx]){
            swap(v[parent],v[indx]);
            indx=parent;
            parent=indx/2;
        } 
    }
    
    }
    void pop(){
        int index=v.size()-1;
        int minindx=1;
        swap(v[minindx],v[index]);
        v.pop_back();
        helper(1);
    }
    void printHeap(){
        for(int x=1;x<v.size();x++) {
            cout<<v[x]<<" ";
        }
    }
    vector<int> sortedlist(){
        vector<int> vec=v;
        sort(vec.begin(),vec.end());
        return vec;
    }
};