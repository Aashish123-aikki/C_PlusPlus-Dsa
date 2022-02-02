#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int compress(vector<char>& chars) {
    // your code goes here
    string c;
    char temp=chars[0];
    c.push_back(temp);
    int count=1;
    for(int i=1;i<=chars.size();i++){
        if(chars[i]==temp){
            count++;
        }else if(chars[i]=='\0') {
                    c=c+to_string(count);
                  break;
        }
        else if(chars[i]!='\0'){
             c=c+to_string(count);
            temp=chars[i];
            c.push_back(temp);
            count=1;
        }
    }
    cout<<c;
        
}
int main(){
    vector<char> chars={'a','a','b','b','c','c','d'};
    
    compress(chars);

}