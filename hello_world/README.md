# C - Hello, World

In this project I discovered and learned the basics of C 9 tasks.

*However, here are the requirements that have been requested:*

## C

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file at the root of the repo, containing a description of the repository
* A README.md file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use system
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl


## Shell scripts

* Allowed editors: vi, vim, emacs
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your scripts should be exactly two lines long ($ wc -l file should print 2)
* All your files should end with a new line
* The first line of all your files should be exactly #!/bin/bash


# **What does it do?**

## **An explanation of how each script works**

### **Task 0**
* [Preprocessor](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/0-preprocessor)

Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c

While using the _gcc .._ command the script runs a C file through the preprocessor and save the result into another file.


### **Task 1**
* [Compiler](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/1-compiler)

Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.
	* Example: if the C file is main.c, the output file should be main.o

While using the _gcc .._ command the script compiles a C file but does not link.


### **Task 2**
* [Assembler](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/2-assembler)

Write a script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s instead of .c.
	* Example: if the C file is main.c, the output file should be main.s

While using the _gcc .._ command the script compiles a C file but does not link.


