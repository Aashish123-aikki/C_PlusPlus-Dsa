#include<bits/stdc++.h>
#include "createHeap.h"
using namespace std;
int j;
int main()
{
    Heap h(10,false);
      h.push(100);
    h.push(120);
    h.push(140);
    h.push(125);
    h.push(148);
    h.push(180);
    h.push(50);
    h.printHeap();
    vector<int> list=h.sortedlist();
    cout<<endl;
    cout<<(list[list.size()-1]-1)*(list[list.size()-2]-1);
    return 0;
}