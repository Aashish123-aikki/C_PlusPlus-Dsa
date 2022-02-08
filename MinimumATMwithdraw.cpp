#include<bits/stdc++.h>
using namespace std;
int sum(vector<int> w,int i,int j){
    int sum=0;
     for(int x=i;x<=j;x++){
                sum=sum+w[x];
              
        }
        return sum;
}

//function to find ....
int check(vector<int> w,int n,int key){
    int arraysum=sum(w,0,n);
    int target=arraysum-key;
int i=0;int j=1;
int currentsum=0;
int largest=0;
int ans=0;

    while(i<n and j<n){
       
        currentsum=sum(w,i,j);
        cout<<"i: "<<i<<"j: "<<j<<" "<<currentsum<<endl;
        if(currentsum<target){
            j++;
        }   

        else if(currentsum>target){
            i++;
        }
        else if(currentsum==target){
            int cuurlen=j-i+1;
            largest=max(largest,cuurlen);
            j++;
            
        }
      
    }
      ans=n-largest;
      cout<<"ans"<<ans<<endl;
    if(largest==0){    
       if(ans==n){
           return n;
       }else{return -1;}
            
        
    }else{
        return ans;
    }
    
}
int main(){
    vector<int> w;
    int n;
    int a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        w.push_back(a);    }
    int key;
    cin>>key;
    for(int x:w){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<check(w,n,key);
}