#include<bits/stdc++.h>
#include "createHeap.h"
using namespace std;
int main()
{
    Heap h(10,true);
    h.push(100);
    h.push(120);
    h.push(140);
    h.push(125);
    h.push(148);
    h.push(180);
    h.push(50);
    h.printHeap();
    cout<<endl;
    h.pop();
    h.printHeap();
    return 0;
}