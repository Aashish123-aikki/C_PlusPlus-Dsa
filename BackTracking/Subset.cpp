#include<bits/stdc++.h>
using namespace std;
vector<string> vec;
bool compare(string a,string b){
    int len1=a.length();
    int len2=b.length();
    return len1<len2;
}
void findsubset(char *input,char *output,int i,int j){
        if(input[i]=='\0'){
            output[j]='\0';
            vec.push_back(output);
            cout<<output<<strlen(output)<<endl;
            return;
        }

        //including comming letter...
        output[j]=input[i];
        findsubset(input,output,i+1,j+1);
        //excluding comming letter... we will take j instead of j+1 so that it's 
        /*.....last letter is ovverwritted by '\0'........*/
        findsubset(input,output,i+1,j);
}

int main(){
        char input[100];
       char output[100];
     cin>>input;
     findsubset(input,output,0,0);
     sort(vec.begin(),vec.end(),compare);
     for(string x:vec){
         cout<<x<<" ";
     }
}