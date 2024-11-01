Practical04
This is the Fourth practical where the program calculates the approximate area under the curve of the tangent function between 0° and 60° using the trapezoidal rule.

Compile:
gcc -o trap2 trap2.c -lm
Execute:
./trap2
output:

TanArr[0] = 0.000000 TanArr[1] = 0.087489 TanArr[2] = 0.176327 TanArr[3] = 0.267949 TanArr[4] = 0.363970 TanArr[5] = 0.466308 TanArr[6] = 0.577350 TanArr[7] = 0.700208 TanArr[8] = 0.839100 TanArr[9] = 1.000000 TanArr[10] = 1.191754 TanArr[11] = 1.428148

Initial area (sum at x(0) and x(12)) = 0.000000 The value of the sum after the loop is: 14.197204

Trapezoidal result is: 0.619470 Real result is:0.693147

The program calculates and prints the tangent values for each interval, followed by the intermediate area computed using the trapezoidal rule. It then displays the final trapezoidal result and compares it with the actual value of log(2).
