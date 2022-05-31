#include <iostream>
// using namespace std; // using this is a bad practice  
#include <string>  
#include <cstring> // C functions for char arrays as strings and the prefix c indicates it is part of c std library
#include <cstdint> // provides C based fixed length definitions for int types hence prefixed with c
#define CAP 5000  // this is a macro which only replaces in source code and does not takr ';' to terminate 
#define DEBUG // you may or maynot initalize DEBUG  
#define AGE_LEN 4


void IfDefDirectiveUse(){
	
#ifdef DEBUG // This is a macro for condition inclusion of code this is a compiler directive not a run time construct like if-else and they work in conjunction with #define directives. It means 'if defined' it includes the following block of code if a macro has been previously defined in your project, hence we can inlcude or exclude portions of our code by commenting or removing macros like DEBUG (here)
	std::cout<<"About to perform addtion"<<std::endl;
#endif 

} 

void UseOfConstQualifier(){
	// const qualifier in C and C++ is not the same, in C it means an immutable data  
	const int var = 10; 
} 

void UseOfArrays(){
	int age[AGE_LEN] = {12,23,35,23}; 
	std::cout<<age<<std::endl;// gives the address of the first element, note that array name is a const pointer so tyring to do any arithatic opreation on it will give an error  
	*(age)+=1; // but this will work as age is a const pointer it is defrenced to the first element and it's value is incresed   
	const int TEMP_LEN = 4;
	float tempratures[TEMP_LEN] = {12.3f,23.34f,24.2f,45.34f}; // when using an initalizer list no need to specify array lenght here auto type inferencing does not work data type must be specified 
	for(int i =0;i<TEMP_LEN;i++) std::cout<<tempratures[i]<<" ";  
	std::cout<<"\n";
}

void UseOfStrings(){ 
	const int LEN_A1 = 25;
	char arr1[LEN_A1] = "Hey Guys!"; 
	char arr2[] = "Whats's up?"; 
	std::string str1 = "Hello everyone! "; 
	std::string str2 = "How are you doing?"; 
	std::cout<<str1+str2<<std::endl;
}

void TypeTutorial(){
	int x = 0b1010; 
	int y = 0xAA;  
	auto flt = 3.14f; // floating point constants without suffix 'f' are doubles by default  
	auto dbl = 3.14;
	auto intv = 10; // Type inference ( the variable must be init when declared) and this variable cannot be reassingned to a diffrent type like string but float and char are acceptable as float would be truncated and only int portion will be taken and an ascii value will be taken for a char 
	intv = 'e';
	std::cout<<typeid(intv).name()<<std::endl; // checking the type of an auto var for type inference
	int32_t large = CAP; // C std int data types 
	uint8_t small = 30;  
	IfDefDirectiveUse();
	large+=small;  
	UseOfConstQualifier();
	UseOfArrays(); 
	UseOfStrings();
} 



/*
    type casting specifies how to interpret a piece of data. it is useful for converting data types and has some consequences in data type promotion 
*/ 

void IllEffectsOfDataTypePromotion(){
    unsigned int n = 10;  
    for(;n>-1;n--) std::cout<<n<<"\n";
    /*
        here the loop won't run at all beacuse -1 is compared against an unsinged int so temporarliy -1 is promoted to an unsigned int 4294967295 hence the failure 
    */
}

void ImplicitConversions(){
    float flt = -7.44f; 
    int32_t sgn; 
    uint32_t unsgn;  
    sgn = flt; 
    unsgn = flt; 
    int fareinht = 100; 
    int celcious = (5/9.0)*(fareinht-32); 
}

void ExplicitConversions(){
	float wght = 10.99f; 
    std::cout<<"float : "<<wght<<std::endl;
    cout<<"int : "<<(int)(wght)<<endl; 
    cout<<"fraction : "<<(wght-(int)(wght))*1000<<endl;
}

int main() {
	
	return 0;
}