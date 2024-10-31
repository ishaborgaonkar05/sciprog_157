Conversion.c File

3. How many binary digits are there in the number and how many can a float/real represent.
4. Let’s say we want to check the number of binary digits. Construct an expression in the code
that will do this.


To calculate how many binary digits (bits) there are in an integer, we can use the formula:

numdigits=log2(inum)

I used the log function from the math.h library to implement. 
The formula to calculate the number of binary digits is:

numdigits=log2(inum)=log(inum)log(2)

We have the formula for Binary Digits

numdigits = (int) ceil(log(inum) / log(2));
This calculates the number of binary digits needed to represent the integer inum.

log(inum) computes the natural logarithm of inum.
log(2) computes the natural logarithm of 2 (since log_2(x) = log(x)/log(2)).
ceil() rounds up to the nearest integer.
Displaying the Result: The binary representation of inum is computed and printed, 
and the number of binary digits is also displayed using the line:


Sum.c File 

Understanding the Problem:
First Sum (sum1):

sum1 is calculated by adding terms in the order:
1+ 1/2 + 1/3 + 1/4 +  .....+1/1000
 
It starts from 1 and goes up to 1000.

Second Sum (sum2):

sum2 is calculated by summing the same terms but in reverse order:
1/1000 +1/999 +1/998 +...+1
Objective:

Complete the code to calculate sum2 (which is the same as sum1, just in reverse).
Print out both sums and the difference between them (diff).



