#include <stdio.h>
#include <stdbool.h>

void isPrime(){
    int givenNumber;
    scanf("%d", &givenNumber);
    if(givenNumber % 2 == 0) printf("The number is Prime");
    else printf("The number is not Prime");
    return;
}

int main(){
    isPrime();
}