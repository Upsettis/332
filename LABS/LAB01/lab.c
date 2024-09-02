#include <stdio.h>
#include <stdbool.h>


//Function isPrime(int n)
//This function determines if a number n is prime by looping 1 - n and seeing if any number leaves a remained of 0 when n mod i is called
//returns false if not prime, returns true if prime

bool isPrime(int n){
    for(int i =1; i < n; i++){
        if((n % i) == 0) return false;
    }
    return true;
}

int main(){
    isPrime();
}
