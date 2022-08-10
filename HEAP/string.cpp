#include<bits/stdc++.h>
using namespace std;
int pkString(int k, string s){
    // Write your code here
    int count=0;
    for(int i=0;i<sizeof(s);i++){
        if(s[i]=='p'){
            count++;
        }
    }
    if(count==k){
        return 1;
    }else{
        return 0;
    }
}
int cyclicString(string a, string b) {
    // Write your code here.
    for(int i=0;i<sizeof(a);i++){
        int count=0;
        while(a[i]!=b[i] and a!=b){
            if(count>=14){
                return 0;
            }else{
                char ch;
                if(a[i]=='y'){
                    ch='a';
                }else if(a[i]=='z'){
                    ch='b';
                }
                else{ch=static_cast<char>(a[i]+2);}
                swap(a[i],ch);
                count++;
                cout<<a<<"     ";
            }
        }
    }
    return 1;
}


int bookReading(vector<int> &l, vector<int> &r){
    // Write your code here
    int cursor=r[0];
    vector<int> left;
             left.reserve(3);
    vector<int> right;
    right.reserve(3);
    for(int i=1;i<l.size();i++){
      
        if(l[i]<cursor){
            left.push_back(l[i]);
            right.push_back(r[i]);
        }else{
        cursor=r[i]+1;}
    }  
    //2nd time........
     vector<int> newleft;
        newleft.reserve(3);
        vector<int> newright;
        newright.reserve(3);
    int check=0;
    if(left.size()>0){
       cout<<left.size()<<" ";
    cursor=right[0];
    cout<<"cursor: "<<cursor;
    for(int i=1;i<left.size();i++){
      
        if(left[i]<cursor){
            check++;
            cout<<check<<" "<<endl;
            newleft.push_back(left[i]);
            newright.push_back(right[i]);
        }else{
        cursor=right[i]+1;}
    } 
    }else{
        return 1;
    }
    if(check==0){
        return 1;
    }
    return 0;
}
int main()
{
    vector<int> a={1,2,3};
    vector<int>b={5,3,4};
   cout<<bookReading(a,b);

    return 0;
}