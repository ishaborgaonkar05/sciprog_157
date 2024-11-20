# Practical07

In practical 7 we perform 2 tasks. In exercise one we find the estimate value of 'e' and the difference between the estimate value of 'e' and the true value of e.
* As the polynomial order increases we the the difference getting smaller upto a certain number. Till the 12th order the difference was getting smaller but at 13th order the difference increased and then at order 14th and 15th it got smaller again.
* As the order increases the factorial value aslo increases exponentially because of which the value of e gets extremely small. Which may not be accurately represented in the memory as machine rounds the number small inaccuracies is seen.

## Compile:

## 1. Difference in estimate 'e' value and true value:

```bash
gcc -o facte facte.c -lm

```
# Execute:

```bash
./facte

Please enter the required polynomial order 
1
e is estimated as 2.0000000000, with difference -7.182818e-01

./facte 
Please enter the required polynomial order 
10
e is estimated as 2.7182818011, with difference -2.731266e-08

./facte 
Please enter the required polynomial order 
12
e is estimated as 2.7182818283, with difference -1.728764e-10

./facte 
Please enter the required polynomial order 
13
e is estimated as 2.7182818288, with difference 3.447078e-10

./facte
Please enter the required polynomial order 
14
e is estimated as 2.7182818296, with difference 1.126602e-09

./facte 
Please enter the required polynomial order 
15
e is estimated as 2.7182818301, with difference 1.625527e-09
```

* In exercise 2 we performed dynamic memory allocation with pointers along with array manipulation and pointer handling and freeing the allocated memory. 

* - Fucntion allocateaaray```(**int size**)```was used to take integers as an argument and return pointer to an allocated memory block of that many intergers.
* - Function fillwithones(**int, `*`array**, **int size**) takes a pointer to an array of integers and fills everycell of the array with a one.
* - Function printarray(**int, `*`array**, **int size**) that takes a pointer to an array of integers and prints its elements on screen.
* - Function freepointer(int *array) frees the allocated memory.

## 1. Difference in estimate 'e' value and true value:

```bash
gcc -o point pointer.c -lm

```
# Execute:

```bash
./point

The values in array are:1111111111111111111111111

```


