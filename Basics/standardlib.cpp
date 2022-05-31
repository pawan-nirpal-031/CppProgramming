#include <iostream> 
#include <vector> 

std::vector<int>primes; 
int main(){
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    for(int i =0;i<primes.size();i++) std::cout<<primes[i]<<" ";
}