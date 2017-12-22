#ifndef __MyHashMap__HPP__
#define __MyHashMap__HPP__
#include "assoctab.h"
#include <cstring>
#include <iostream>
using namespace std;
class MyHashMap : public assocTab{
    const char* toLowerCase(const char*);
    typedef assocTab super;
    public:
    int& operator[](const char*);
    MyHashMap();
    MyHashMap(const assocTab&);
};



#endif
