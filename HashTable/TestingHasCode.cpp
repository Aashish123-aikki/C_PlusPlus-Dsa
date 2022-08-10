#include<bits/stdc++.h>
#include "hashtabl.h"
using namespace std;
int main()
{
    hashTABLE<int> h;
    h.insert("mango",100);
    h.insert("apple",140);
    h.insert("lichi",160);
    h.insert("guvava",144);
    h.insert("graphes",170);
    h.insert("ananas",180);
    h.insert("orange",150);
    h.insert("angom",670);
    h.printTABLE();
    h.erase("guva");
    h.printTABLE();
    return 0;
}