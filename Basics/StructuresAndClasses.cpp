#include "cow.h"
using namespace std;


int a = 37; 
int *ptr = nullptr; 
COW *cow_ptr = nullptr; 

int main(){
    ptr = &a; 
    int& refa = a; // refrences are not pointers or objects also refrences do not have addresses and there are no pointers to refrences and they must always be initalized, an useful application is avoiding passing large objects that contain large amount of data simply passing a refr will be able to access the data object in fucntion parameters, remember the orignal object will be modified unless passed by a const refrence which will enforce immutablity
    cow_ptr = new COW("pingo",3,COW_H::pet);  
    cow_ptr->Show(); 
    cout<<cow_ptr->GetName();
    delete(cow_ptr); // avoid mem leakage
}
