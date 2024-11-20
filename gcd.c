#include <stdio.h>


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
    printf("please enter two positive integers: \n");
    error= scanf("%d %d", &a, &b);
    if(error !=2){
        printf("please enter two integers!\n");
        return 1;
    }
    if(a<=0 || b<=0){
        printf("Please enter two positive integer!\n");
        return 1;
    }

    printf("Iterative_gcd(%d. %d)=%d\n", a, b, iterative_gcd(a,b));
    printf("Recursive_gcd(%d. %d)=%d\n", a, b, recursive_gcd(a,b));
    
    return 0;
}