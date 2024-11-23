#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int iterative_gcd(int a, int b){
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int recursive_gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return (recursive_gcd(b, a%b));
    }
}

int main(){

    int a,b, error;
    srand(time(NULL));
    a = (rand()%20)+1;
    b = (rand()%20)+1;

    printf("Iterative_gcd(%d. %d)=%d\n", a, b, iterative_gcd(a,b));
    printf("Recursive_gcd(%d. %d)=%d\n", a, b, recursive_gcd(a,b));
    
    return 0;
}