## PROGRAMMING-FOR-PROBLEM-SOLVING-LABORATORY
|S.No|SIMPLE NUMERIC PROBLEMS|||
|---|-------------------------------------------------------------------|--------|-----------|
| 1 | Write a Program for finding the max and min from the three numbers.| [code](Max-Min.c)   |   program |
| 2 | Write the program for the simple, compound interest.               |  [code](Calc-interest.c)  | program |
| 3 | Write a program that declares Class awarded for a given percentage of marks, where mark <40%= Failed, 40% to <60% = Second class, 60% to <70%=First class, >= 70% = Distinction. Read percentage from standard input. | [code](Percentage-Class.c) | program |
| 4 | Write a program that prints a multiplication table for a given number and the number of rows in the table. | [code](Multiplication-table.c) | program |
| 5 | Write a program that shows the binary equivalent of a given positive number between 0 to 255.| code | program |

|S.No| EXPRESSION EVALUATION|||
|---|-------------------------------------------------------------------|--------|-----------|
|1|A building has 10 floors with a floor height of 3 meters each. A ball is dropped from the top of the building. Find the time taken by the ball to reach each floor. (Use the formula s = ut+(1/2)at^2 where u and a are the initial velocity in m/sec (= 0) and acceleration in m/sec^2 (= 9.8 m/s^2)).| [code](Ball-time.c) | program |
|2| Write a C program, which takes two integer operands and one operator from the user, performs the operation and then prints the result. (Consider the operators +,-,*, /, % and use Switch Statement)| [code](Simple-calc_2terms.c) | program |
|3|Write a program that finds if a given number is a prime number.|[code](Prime_number.c)|program|
|4|Write a C program to find the sum of individual digits of a positive integer and test given number is palindrome|[code](Palindrome.c)|program|
|5| A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms in the sequence. Write a C program to generate the first n terms of the sequence. |[code](Series-1.c)|program|
|6|Write a C program to generate all the prime numbers between 1 and n, where n is a value supplied by the user|[code](Prime_number-1.c)|program|
|7|Write a C program to find the roots of a Quadratic equation.|[code](Quad-root.c)|program|
|8|Write a C program to calculate the following, where x is a fractional value. 1-x/2 +x^2/4-x^3/6|code|program|
|9|Write a C program to read in two numbers, x and n, and then compute the sum of this geometric progression: 1+x+x^2+x^3+………….+x^n. For example: if n is 3 and x is 5, then the program computes 1+5+25+125.|[code](Series-2.c)|program|

|S.No|Arrays, Pointers and Functions|||
|---|-------------------------------------------------------------------|--------|-----------|
|1|Write a C program to find the minimum, maximum and average in an array of integers.|[code](Arr_int.c)|program|
|2|Write a function to compute mean, variance, Standard Deviation, sorting of n elements in a single dimension array. |code|program|
|3|Write a C program that uses functions to perform the following: |||
||a. Addition of Two Matrices |[code](Mat_Sum.c)|program|
||b. Multiplication of Two Matrices |code|program|
||c. Transpose of a matrix with memory dynamically allocated for the new matrix as row and column counts may not be the same|code|program|
|4|Write C programs that use both recursive and non-recursive functions |||
||a. To find the factorial of a given integer. |code|program|
||b. To find the GCD (greatest common divisor) of two given integers.|code|program|
||c. To find x^n |code|program|
|5|Write a program for reading elements using a pointer into an array and display the values using the array.|code|program|
|6|Write a program for display values reverse order from an array using a pointer.|code|program|
|7|Write a program through a pointer variable to sum of n elements from an array.|code|program|

|S.No|FILES|||
|---|-------------------------------------------------------------------|--------|-----------|
|1| Write a C program to display the contents of a file to standard output device.|code|program|
|2| Write a C program which copies one file to another, replacing all lowercase characters with their uppercase equivalents.|code|program|
|3| Write a C program to count the number of times a character occurs in a text file. The file name and the character are supplied as command line arguments.|code|program|
|4| Write a C program that does the following:
||It should first create a binary file and store 10 integers, where the file name and 10 values are given in the command line. (hint: convert the strings using atoi function)<br />Now the program asks for an index and a value from the user and the value at that index should be changed to the new value in the file. (hint: use fseek function)<br />The program should then read all 10 values and print them back|code|program|
|5|Write a C program to merge two files into a third file (i.e., the contents of the first file followed by those of the second are put in the third file)|code|program|

|S.No|STRINGS|||
|---|-------------------------------------------------------------------|--------|-----------|
|1|Write a C program to convert a Roman numeral ranging from I to L to its decimal equivalent.|code|program|
|2|Write a C program that converts a number ranging from 1 to 50 to Roman equivalent |code|program|
|3|Write a C program that uses functions to perform the following operations: | ||
||a. To insert a sub-string into a given main string from a given position. |code|program|
||b. To delete n Characters from a given position in a given string. |code|program|
|4|Write a C program to determine if the given string is a palindrome or not (Spelled same in both directions with or without a meaning like madam, civic, noon, abcba, etc.)|code|program|
|5|Write a C program that displays the position of a character ch in the string S or – 1 if S doesn‘t contain ch|code|program|
|6|Write a C program to count the lines, words and characters in a given text. |code|program|

|S.No|MISCELLANEOUS|||
|---|-------------------------------------------------------------------|--------|-----------|
|1|Write a menu driven C program that allows a user to enter n numbers and then choose between finding the smallest, largest, sum, or average. The menu and all the choices are to be functions.<br/> Use a switch statement to determine what action to take. Display an error message if an invalid choice is entered|code|program|
|2|Write a C program to construct a pyramid of numbers as follows: <br/>1‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ * ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ 1‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ 1‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ * <br/>1 2‎ ‎ ‎ ‎ ‎ * * ‎ ‎ ‎ ‎ ‎ ‎ 2 3 ‎ ‎ ‎ ‎ 2 2 ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ * * <br/>1 2 3 ‎ * * * ‎ ‎ ‎ 4 5 6 ‎ ‎ 3 3 3 ‎ ‎ ‎ ‎ ‎ ‎ ‎ * * *  <br/> ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎‎4 4 4 4 ‎ ‎ ‎ ‎ * *<br/> ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ ‎ * <br/> |code|program|
 
|S.No|SORTING AND SEARCHING ||| 
|---|-------------------------------------------------------------------|--------|-----------|
|1|Write a C program that uses non recursive function to search for a Key value in a given list of integers using linear search method. |code|program|
|2|Write a C program that uses non recursive function to search for a Key value in a given sorted list of integers using binary search method. |code|program|
|3|Write a C program that implements the Bubble sort method to sort a given list of integers in ascending order|code|program|
|4|Write a C program that sorts the given array of integers using selection sort in descending order|code|program|
|5|Write a C program that sorts the given array of integers using insertion sort in ascending order|code|program|
|6|Write a C program that sorts a given array of names|code|program|

 


