# Operators in C++

## Aim : To study and implement Operators in C++

## Software Required:
Visual  Studio

## Explanation of the C++ Program: Check Number Sign

This program reads an integer from the user and determines whether it is positive, negative, or zero.

- `#include<iostream>`  
  Includes the standard input-output library needed for `cin` and `cout`.

- `using namespace std;`  
  Enables usage of standard library functions without the `std::` prefix.

- `int main()`  
  The starting point of the program.

- Variable declaration:  
  `int num;` This variable stores the integer input from the user.

- Input:  
  The program waits for the user to enter an integer using `cin >> num;`.

- Conditional checks:  
  - `if(num > 0)` checks if the number is positive and prints "enter the number is + :".  
  - `else if(num < 0)` checks if the number is negative and prints "enter the numder is -:".  
  - `else` handles the case when the number is zero and prints "the enter num is 0 :".

- Program ends after outputting the appropriate message.

This simple decision-making program teaches the use of `if-else` statements to classify numeric input.

## Explanation of the C++ Program: Point Location in Coordinate Plane

This program takes two integer inputs, `X` and `Y`, representing coordinates of a point, and determines which quadrant or axis the point lies on.

- `#include<iostream>`  
  Includes input-output stream library.

- `using namespace std;`  
  Allows use of standard library functions without prefixing.

- `int main()`  
  Main function where the program runs.

- Variables:  
  `int X, Y;` These store the x and y coordinates entered by the user.

- Input:  
  Prompts the user to enter values for `X` and `Y`.

- Logic:  
  Uses a series of `if-else if` conditions to check:
  - If both `X > 0` and `Y > 0`, point is in **Quadrant 1**.  
  - If `X < 0` and `Y > 0`, point is in **Quadrant 2**.  
  - If both `X < 0` and `Y < 0`, point is in **Quadrant 3**.  
  - If `X > 0` and `Y < 0`, point is in **Quadrant 4**.  
  - If `Y == 0`, the point lies **on the X-axis**.  
  - If `X == 0`, the point lies **on the Y-axis**.  
  - If `X == 0` and `Y == 0`, the point is at the **origin**.

- Output:  
  Prints a message indicating the location of the point in the coordinate plane.

This program is useful for understanding conditions and combining logical operators to determine spatial relationships.

## Explanation of the C++ Program: Calculate Grade Based on Average Marks

This program calculates the average of four subject marks and assigns a grade based on the average score.

- `#include<iostream>`  
  Includes the input-output stream library.

- `using namespace std;`  
  Allows direct use of standard library functions.

- `int main()`  
  The main function where execution begins.

- Variables:  
  `int m3, ss, dldc, edc, avg, num;`  
  Variables to hold marks for four subjects and the average.

- Input:  
  Prompts the user to enter marks for each subject: `m3`, `ss`, `dldc`, and `edc`.

- Processing:  
  Calculates the average by summing all marks and dividing by 4.

- Conditional grading:  
  - If average is exactly 90, prints "the grade is o:".  
  - If average is between 80 and 100 (inclusive), prints "the gade is A+ :".  
  - If average is between 60 and 79, prints "the grade is A :".  
  - If average is below 60, prints a failure message "fail ahi tu lawde".

- The program demonstrates the use of arithmetic operations and conditional statements to categorize performance.

This simple grading system introduces fundamental programming concepts such as input handling, arithmetic, and conditional logic.

## Conclusion:
I explored various Types of Operators in C++ and understood the usage of the operators.
