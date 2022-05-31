#include "cow.h" 

void COW::SetAge(int x){
    this->age  = x; 
}

COW::COW(){
    name = "default";
    age =0; 
    purpose = hide;
} 

COW::COW(std::string nm,int a,unsigned char p){
    name = nm; 
    age = a; 
    purpose = p;
}

void COW::Show(){
    std::cout<<"Name : "<<this->name<<" , Age : "<<this->age<<" , Purpose : "<<this->purpose<<"\n";
} 

int COW::GetAge(){
    return this->age;
}

std::string COW::GetName(){
    return this->name;
}