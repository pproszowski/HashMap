#include "MyHashMap.hpp"

const char* MyHashMap::toLowerCase(const char* givenString){
   
    char* lowerCaseString = new char[strlen(givenString) + 1]; 
    for(unsigned int i = 0; i<strlen(givenString); i++){
        lowerCaseString[i] = (char) tolower(givenString[i]);
    }
    lowerCaseString[strlen(givenString) + 1] = '\0';
    const char* toReturn = lowerCaseString;
    return toReturn;
}

int& MyHashMap::operator[](const char* n){
 
    const char* lowerCase = toLowerCase(n);
    return super::operator[](lowerCase);
}

MyHashMap::MyHashMap(): 
    super(){
         
}

MyHashMap::MyHashMap(const assocTab& tab):
    super(tab){
}
