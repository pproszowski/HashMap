#include <iostream>
using namespace std;
#include "MyHashMap.hpp"


int main ()
{
  MyHashMap a1, a2;
  a1["aLa"] = 1;
  a1["Ola"] = 2;
  cout << a1["AlA"] << " " << a1["OLa"] << " " << a1["uLA"] << endl;
  a2 = a1;
  a2["ulA"]++;
  cout << a2["ala"] << " " << a2["oLA"] << " " << a2["ULa"] << endl;
}
