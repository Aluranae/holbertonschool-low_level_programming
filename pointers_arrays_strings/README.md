# C - Pointers, arrays and strings

This README contains the next three projects of my learning journey in C through 27 tasks.

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


# **What does it do?**

## **An explanation of how each functions/programs works**

### Project 1 : C - Pointers, arrays and strings

### **Task 0**
* [98 Battery st.](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/0-reset_to_98.c)

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

* Prototype: void reset_to_98(int *n);



### **Task 1**
* [Don't swap horses in crossing a stream](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/1-swap.c)

Write a function that swaps the values of two integers.

* Prototype: void swap_int(int *a, int *b);



### **Task 2**
* [This report, by its very length, defends itself against the risk of being read](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/2-strlen.c)

Write a function that returns the length of a string.

* Prototype: int _strlen(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.



### **Task 3**
* [I do not fear computers. I fear the lack of them](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/3-puts.c)

Write a function that prints a string, followed by a new line, to stdout.

* Prototype: void _puts(char *str);

FYI: The standard library provides a similar function: puts. Run man puts to learn more.



### **Task 4**
* [I can only go one way. I've not got a reverse gear](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/4-print_rev.c)

Write a function that prints a string, in reverse, followed by a new line.

* Prototype: void print_rev(char *s);



### **Task 5**
* [A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/5-rev_string.c)

Write a function that reverses a string.

* Prototype: void rev_string(char *s);



### **Task 6**
* [Half the lies they tell about me aren't true](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/6-puts2.c)

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

* Prototype: void puts2(char *str);



### **Task 7**
* [Winning is only half of it. Having fun is the other half](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/7-puts_half.c)

Write a function that prints half of a string, followed by a new line.

* Prototype: void puts_half(char *str);
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string + 1) / 2



### **Task 8**
* [Arrays are not pointers](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/8-print_array.c)

Write a function that prints n elements of an array of integers, followed by a new line.

* Prototype: void print_array(int *a, int n);
* where n is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
* You are allowed to use printf



### **Task 9**
* [strcpy](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/9-strcpy.c)

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

* Prototype: char *_strcpy(char *dest, char *src);
* Return value: the pointer to dest

FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.



### **Task 10**
* [Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/100-atoi.c)

Write a function that convert a string to an integer.

* Prototype: int _atoi(char *s);
* The number in the string can be preceded by an infinite number of characters
* You need to take into account all the - and + signs before the number
* If there are no numbers in the string, the function must return 0
* You are not allowed to use long
* You are not allowed to declare new variables of “type” array
* You are not allowed to hard-code special values
* We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.




# Project 2 : C - More pointers, arrays and strings


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



# **What does it do?**

## **An explanation of how each functions/programs works**



### **Task 0**
* [strcat](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/0-strcat.c)

Write a function that concatenates two strings.

* Prototype: char *_strcat(char *dest, char *src);
* This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
* Returns a pointer to the resulting string dest

FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.



### **Task 1**
* [strncat](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/1-strncat.c)

Write a function that concatenates two strings.

* Prototype: char *_strncat(char *dest, char *src, int n);
* The _strncat function is similar to the _strcat function, except that
	* it will use at most n bytes from src; and
	* src does not need to be null-terminated if it contains n or more bytes
* Return a pointer to the resulting string dest

FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.



### **Task 2**
* [strncpy](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/2-strncpy.c)

Write a function that copies a string.

* Prototype: char *_strncpy(char *dest, char *src, int n);
* Your function should work exactly like strncpy

FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.



### **Task 4**
* [I am a kind of paranoid in reverse. I suspect people of plotting to make me happy](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/4-rev_array.c)

Write a function that reverses the content of an array of integers.

* Prototype: void reverse_array(int *a, int n);
* Where n is the number of elements of the array



### **Task 5**
* [Always look up](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/5-string_toupper.c)

Write a function that changes all lowercase letters of a string to uppercase.

* Prototype: char *string_toupper(char *);



### **Task 6**
* [Expect the best. Prepare for the worst. Capitalize on what comes](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/6-cap_string.c)

Write a function that capitalizes all words of a string.

* Prototype: char *cap_string(char *);
* Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }




### **Task 7**
* [Mozart composed his music not for the elite, but for everybody](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/7-leet.c)

Write a function that encodes a string into 1337.

* Letters a and A should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1
* Prototype: char *leet(char *);
* You can only use one if in your code
* You can only use two loops in your code
* You are not allowed to use switch
* You are not allowed to use any ternary operation




# Project 3 : C - Even more pointers, arrays and strings


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




# **What does it do?**

## **An explanation of how each functions/programs works**




### **Task 0**
* [memset](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/0-memset.c)

Write a function that fills memory with a constant byte.

* Prototype: char *_memset(char *s, char b, unsigned int n);
* The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
* Returns a pointer to the memory area s

FYI: The standard library provides a similar function: memset. Run man memset to learn more.



### **Task 1**
* [memcpy](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/1-memcpy.c)

Write a function that copies memory area.

* Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
* The _memcpy() function copies n bytes from memory area src to memory area dest
* Returns a pointer to dest

FYI: The standard library provides a similar function: memcpy. Run man memcpy to learn more.



### **Task 2**
* [strchr](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/2-strchr.c)

Write a function that locates a character in a string.

* Prototype: char *_strchr(char *s, char c);
* Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

FYI: The standard library provides a similar function: strchr. Run man strchr to learn more.



### **Task 3**
* [strspn](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/3-strspn.c)

Write a function that gets the length of a prefix substring.

* Prototype: unsigned int _strspn(char *s, char *accept);
* Returns the number of bytes in the initial segment of s which consist only of bytes from accept

FYI: The standard library provides a similar function: strspn. Run man strspn to learn more.



### **Task 4**
* [strpbrk](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/4-strpbrk.c)

Write a function that searches a string for any of a set of bytes.

* Prototype: char *_strpbrk(char *s, char *accept);
* The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
* Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

FYI: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.



### **Task 5**
* [strstr](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/5-strstr.c)

Write a function that locates a substring.

* Prototype: char *_strstr(char *haystack, char *needle);
* The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
* Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

FYI: The standard library provides a similar function: strstr. Run man strstr to learn more.



### **Task 6**
* [Chess is mental torture](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/7-print_chessboard.c)

Write a function that prints the chessboard.

* Prototype: void print_chessboard(char (*a)[8]);



### **Task 7**
* [The line of life is a ragged diagonal between duty and desire](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/8-print_diagsums.c)

Write a function that prints the sum of the two diagonals of a square matrix of integers.

* Prototype: void print_diagsums(int *a, int size);
* Format: see example
* You are allowed to use the standard Library

Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.
