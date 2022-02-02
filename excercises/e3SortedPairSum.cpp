#include<iostream>
#include<vector>
using namespace std;
pair<int,int> check(vector<int> arr,int x){
        int n=arr.size();
        int first=0;
        int last=n-1;
        pair<int,int> p;
        p.first=arr[0];
        p.second=arr[last+1];
        
        int dif=abs(arr[last+1]+arr[0]-x);
        while(last>first){
            if(abs(arr[last]+arr[first]-x)<dif){
                    p.first=arr[first];
                    p.second=arr[last];
            
                    dif=abs(arr[last]+arr[first]-x);
            }
            if((arr[first]+arr[last])>x){
                last--;
            }else{
                first++;
            }
        }
        return p;
}

int main(){
   vector<int> arr={4,5,6,8,85,98};
    int x;
    cout<<"Enter value:  ";
    cin>>x;
    cout<<"Pair is: ";
    pair<int,int> p=check(arr,x);
    cout<<"("<<p.first<<","<<p.second<<")";
}