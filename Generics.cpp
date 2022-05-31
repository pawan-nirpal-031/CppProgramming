#include <iostream> 
using namespace std; 

template <class Y> // declaring generic type
Y sum(const Y data[],int size, Y s =0){ // const makes array contents immutable 
    for(int i =0;i<size;i++) s+=data[i];
    return s;
}

template <class Y> // template must be defined for each function that uses it
Y diffrence(const Y data[],int size,Y d=0){
    for(int i =0;i<size;i++) d-=data[i]; 
    return d;
}

int main(){
    int a[3] = {1,2,4};
    double b[3] = {1.2,2.4,5.6}; 
    cout<<diffrence(a,3)<<' '<<diffrence(b,3);
}