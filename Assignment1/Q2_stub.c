#include <stdio.h>
#include<math.h>

// Function to calculate the determinant of a 3x3 matrix

float getdet(float minor[3][3]) {
    return minor[0][0] * (minor[1][1] * minor[2][2] - minor[1][2] * minor[2][1])
         - minor[0][1] * (minor[1][0] * minor[2][2] - minor[1][2] * minor[2][0])
         + minor[0][2] * (minor[1][0] * minor[2][1] - minor[1][1] * minor[2][0]);
}

int main(void) {

//variable declarations

   float hmat[4][4], minor[3][3];

//Initializing and print the 4x4 Hilbert matrix formatted to four decimal places
    printf("4x4 Hilbert Matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            hmat[i][j] = 1.0 / (i + j + 1);
            printf("%0.4f ", hmat[i][j]);
        }
        printf("\n");
    }


// Calculating the determinant of the 4x4 Hilbert matrix using Cramer's rule
    float determinant = 0.0;

// Applying cramer's rule

// a(matrix) * det(minor matrix of b, c, d)
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            minor[i - 1][j - 1] = hmat[i][j];
        }
    }

     determinant += hmat[0][0] * getdet(minor);

    // -b(matrix) * det(minor matrix of a, c, d)
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j < 1)
                minor[i - 1][j] = hmat[i][j];
            else
                minor[i - 1][j - 1] = hmat[i][j];
        }
    }
    determinant -= hmat[0][1] * getdet(minor);

    // +c(matrix) * det(minor matrix of a, b, d)
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j < 2)
                minor[i - 1][j] = hmat[i][j];
            else
                minor[i - 1][j - 1] = hmat[i][j];
        }
    }
    determinant += hmat[0][2] * getdet(minor);

    // -d * det(minor matrix of a, b, c)
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            minor[i - 1][j] = hmat[i][j];
        }
    }
    determinant -= hmat[0][3] * getdet(minor);

    // Print the calculated determinant
    printf("Determinant of the 4x4 Hilbert matrix: %.4f\n", determinant);




    return 0;
}



