# C - Functions, nested loops

In this project I learned how Functions and Nested Loops works through 16 tasks.

*However, here are the requirements that have been requested:*

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc...is forbidden
You are allowed to use _putchar
You don't have to push _putchar.c, we will use our file. If you do it won't be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo). We will use our own main.c files at compilation.
Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don't forget to push your header file



# **What does it do?**

## **An explanation of how each script and program works**


### **Task 0**
* [_putchar](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/functions_nested_loops/0-putchar.c)

Write a program that prints _putchar, followed by a new line.

* The program should return 0


### **Task 1**
* [I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/functions_nested_loops/1-alphabet.c)

Write a function that prints the alphabet, in lowercase, followed by a new line.

* Prototype: void print_alphabet(void);
* You can only use _putchar twice in your code


### **Task 2**
* [10 x alphabet](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/functions_nested_loops/2-print_alphabet_x10.c)

Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

* Prototype: void print_alphabet_x10(void);
* You can only use _putchar twice in your code


### **Task 3**
* [islower](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/functions_nested_loops/3-islower.c)

Write a function that checks for lowercase character.

* Prototype: int _islower(int c);
* Returns 1 if c is lowercase
* Returns 0 otherwise

FYI: The standard library provides a similar function: islower. Run man islower to learn more.


### **Task 4**
* [isalpha](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/functions_nested_loops/4-isalpha.c)

Write a function that checks for alphabetic character.

* Prototype: int _isalpha(int c);
* Returns 1 if c is a letter, lowercase or uppercase
* Returns 0 otherwise

FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.


### **Task 5**
* [Sign](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/functions_nested_loops/5-sign.c)

Write a function that prints the sign of a number.

* Prototype: int print_sign(int n);
* Returns 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero


