# fibonacci-3ways
# Question2

## Development enviroment 
using codeblocks 20.03

## How to compile and run the source code 
- download the source code 
- open code blocks 
- press file then press open 
- choose the file source ( make sure the type of the file is : C source file )
- press build and run 

*Differences between the 3 methods:*

* Recursive Function:
   - Advantages: Simple and intuitive implementation, easy to understand.
   - Disadvantages: Inefficient for large values of n due to repeated function calls and redundant calculations. Can lead to stack overflow errors.
   - 
* Bottom-Up Approach (Tabulation):
   - Advantages: Efficient and avoids stack overflow errors since it uses an iterative approach. No additional memory overhead compared to memoization.
   - Disadvantages: Requires an array of size n+1 to store all the computed values, which may not be efficient for extremely large values of n.

* Dynamic Programming (Memoization):
   - Advantages: Efficient for large values of n as it stores previously computed values and avoids redundant calculations.
   - Disadvantages: Requires additional memory for the memoization array. May still face stack overflow errors for very large values of n due to the recursive nature of the function.
   
Overall, the choice of method depends on the constraints of the problem and the range of values for n. Recursive function is simple
