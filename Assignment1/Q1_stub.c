#include <stdio.h>
#include<math.h>

int main() {


    int n;
    printf("Enter the number of data points (n):\n ");
    scanf("%d", &n);

//Enter the number of data points

    float x[n], y[n];

    printf("Enter the x and y values:\n");
    printf("Hit the enter after entering a value\n ");
    for (int i = 0; i < n; i++) {
        printf("x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("y[%d]: ", i);
        scanf("%f", &y[i]);
    }

/* Calculate alpha and beta formulas
Use the pow() function for the calculation of power of 2 in the formula.
Check and exit the code if the denominator for a is equal to zero.*/

// Initializing the variables to compute sums required for alpha and beta calculations
    float sum_x = 0, sum_y = 0, sum_x2 = 0, sum_xy = 0;


// Calculating the sums
    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_x2 += pow(x[i], 2);
        sum_xy += x[i] * y[i];
    }


//Printing the equation of the line
float denominator = (n * sum_x2) - pow(sum_x, 2);

//Checking whether the denominator is zero just to avoid division by zero error
    if (denominator == 0) {
        printf("Error: Denominator is zero. Cannot compute alpha and beta.\n");
        return 1;
    }

//Calculating alpha and beta
    float alpha = (n * sum_xy - sum_x * sum_y) / denominator;
    float beta = (sum_y - alpha * sum_x) / n;

//Printing the equation of the line
    printf("The equation of the best-fit line is: y = %.2fx + %.2f\n", alpha, beta);

    return 0;
}

