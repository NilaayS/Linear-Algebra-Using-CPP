# Matrix Echelon Form and Linear Equation Solver

This documentation covers two C++ programs for matrix operations and solving linear equations using Gaussian elimination.   
Programme 1 computes the row echelon form of a user-provided matrix.
Programme 2 builds on Programme 1's logic (integrated directly, not via header) to solve systems of linear equations assuming unique solutions exist.

## Programme 1: Echelon Form Converter

Programme 1 finds the row echelon form of the input matrix using Gaussian elimination. 

### Input Format
- Enter the number of rows and columns of the matrix as prompted.
- Then, enter each element row-wise, one per line.

For example, for a 2x2 matrix like:

\[
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]

Provide the input line by line as follows:

```
1
2
3
4
```

The program outputs the echelon form of the input matrix. 

## Programme 2:  Linear Equation Solver

Programme 2 uses modified code from Programme 1 (integrated directly, not as a header file) to solve linear equations of any degree, provided unique solutions exist. 

### Input Format
- First, enter the number of unknowns (variables) and the number of equations. 
- Then, enter each equation's coefficients and constant term line by line, in the order: coefficients for unknowns followed by the right-hand side value. 

For example, for 2 unknowns (u1, u2) and 2 equations:

u1 + 2u2 = 3  
4u1 - 5u2 = 6

Enter the values line by line as follows:

```
1
2
3
4
-5
6
```
