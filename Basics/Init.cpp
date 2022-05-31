#include <iostream>
// using namespace std; // using this is a bad practice  
#include <string> 
#include <cstdint> // provides C based fixed length definitions for int types hence prefixed with c
#define CAP 5000  // this is a macro which only replaces in source code and does not takr ';' to terminate 
#define DEBUG // you may or maynot initalize DEBUG  



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
	int age[4] = {12,23,35,23}; 
	std::cout<<age<<std::endl;// gives the address of the first element, note that array name is a const pointer so tyring to do any arithatic opreation on it will give an error  
	*(age)+=1; // but this will work as age is a const pointer it is defrenced to the first element and it's value is incresed 
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
}

int main() {
	TypeTutorial();
	return 0;
}