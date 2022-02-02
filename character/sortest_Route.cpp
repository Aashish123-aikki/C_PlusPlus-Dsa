#include<iostream>
using namespace std;

int main(){
    char ch[150];
    cout<<"Enter direction: ";
    cin.getline(ch,150);
    int x=0;
    int y=0;
    for(int i=0;ch[i]!='\0';i++){
        switch (ch[i])
        {
            case 'n'|'N':
                y++;
                break;
            case 's'|'S':
                y--;
                break;
            case 'E'|'e':
                x++;
                break;
            case 'w'|'W':
                x--;
                break;       
        
        }
    }
    cout<<"x: "<<x<<", Y: "<<y<<endl;

    if(x>=0 and y>=0){
        while(y--){
            cout<<"N";
        }
        while(x!=0){
            cout<<"W";
            x--;
        }
    }
}