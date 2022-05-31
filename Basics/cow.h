#ifndef COW_H // this include gaurd uses a macro COW_H it allows only one include if multiple includes in final object file then you may face errors this means if COW class is not defined then inlude this defination 

#define COW_H  
// using a namespace inside .h file is a bad practice it means the whole project is forced to use the same namespace so always use scope resolution opreators 
#include <string> 
#include <iostream>
enum cow_purpose{dairy,hide,pet,milk_only};

class COW{
private: 
    std::string name; 
    int age; 
    unsigned char purpose; // unsigned integer value of 1 byte 
public:
    void SetAge(int x);
    COW();
    COW(std::string nm,int a,unsigned char p);
    void Show(); 
    int GetAge(); 
    std::string GetName();
};

#endif