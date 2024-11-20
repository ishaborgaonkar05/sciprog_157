# Practical09

This is the 9th practical in which the code determines if a given matrix is a magice square. Where the magic square means that the sum of each row, each column or the sum of both diagonals is equal to a magic constant M.

* The magic constant \( M \) is given as:

$$
M = \frac{n \times (n^2 + 1)}{2}
$$

### main_stub.c:

This program reads the matrix from a file and allpcates memory for the matrix dynamically. Validates if the input matrix is a magic square using the magic_square.h function file then it free the allocated memory and cloases the file.

### magic_square.h:

This file has the function ismagicsquare which to verify if the input matrix is a magic square or not.
That is it checks if the sum of each rows, sum of each column and sum of both the diagonals is equal to the Constant M.

### Text files:

We have two text files magic_square.txt and not_magic_square.txt which contains the two matrix where one meets the condition and the other does not.
       

## Compile:

## 1. main_stub.c:

```bash
gcc main_stub.c -o out -Wall

```
# Execute:

* For file magic_square.txt: This files has the matrix whose sum of each rows, sum of each column and sum of both the diagonals is equal to the Constant M.

```bash
./out
Enter file name: magic_square.txt
No. lines, 3
This is magic!
```

* For file not_magic_square.txt: This files has the matrix whose sum of each rows, sum of each column and sum of both the diagonals is not equal to the Constant M.

```bash
./out

Enter file name: not_magic_square.txt
No. lines, 3
This is not magic
```
