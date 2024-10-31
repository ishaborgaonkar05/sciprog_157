#include <stdio.h>

int main(void) {
    int x;
    double a;
    int ierr; 

    printf("Enter an int and a double: \n");
    ierr = scanf("%d %lf", &x, &a);

    if (ierr != 2) {
        printf("Problem with input\n");
    } else {
        printf("You entered: %d and %lf\n", x, a);
    }

    return 0;
}
