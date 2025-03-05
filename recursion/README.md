# C - Recursion

This README contains the information about recursion in my learning journey in C through 7 tasks.

*However, here are the requirements that have been requested:*

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc... is forbidden
* You are allowed to use _putchar
* You don't have to push _putchar.c, we will use our file. If you do it won't be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don't forget to push your header file
* You are not allowed to use any kind of loops
* You are not allowed to use static variables



# **What does it do?**

## **An explanation of how each functions/programs works**


### **Task 0**
* [She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/recursion/0-puts_recursion.c)

Write a function that prints a string, followed by a new line.

* Prototype: void _puts_recursion(char *s);

FYI: The standard library provides a similar function: puts. Run man puts to learn more.



### **Task 1**
* [Why is it so important to dream? Because, in my dreams we are together](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/recursion/1-print_rev_recursion.c)

Write a function that prints a string in reverse.

* Prototype: void _print_rev_recursion(char *s);



### **Task 2**
* [Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/recursion/2-strlen_recursion.c)

Write a function that returns the length of a string.

* Prototype: int _strlen_recursion(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.



### **Task 3**
* [You mustn't be afraid to dream a little bigger, darling](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/recursion/3-factorial.c)

Write a function that returns the factorial of a given number.

* Prototype: int factorial(int n);
* If n is lower than 0, the function should return -1 to indicate an error
* Factorial of 0 is 1



### **Task 4**
* [Once an idea has taken hold of the brain it's almost impossible to eradicate](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/recursion/4-pow_recursion.c)

Write a function that returns the value of x raised to the power of y.

* Prototype: int _pow_recursion(int x, int y);
* If y is lower than 0, the function should return -1

FYI: The standard library provides a different function: pow. Run man pow to learn more.



### **Task 5**
* [Your subconscious is looking for the dreamer](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/recursion/5-sqrt_recursion.c)

Write a function that returns the natural square root of a number.

* Prototype: int _sqrt_recursion(int n);
* If n does not have a natural square root, the function should return -1

FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.



### **Task 6**
* [ Inception. Is it possible?](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/recursion/6-is_prime_number.c)

Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

* Prototype: int is_prime_number(int n);




