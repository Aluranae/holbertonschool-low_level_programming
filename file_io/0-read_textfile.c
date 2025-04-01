#include "main.h"

/**
* read_textfile - Reads a text file and prints it
* to the POSIX standard output.
* @filename: Name of the file to read.
* @letters: Number of letters to read and print.
*
* Return: The actual number of letters it could read and print.
*         0 if the file cannot be opened or read,
*         0 if filename is NULL,
*         0 if write fails or does not write the expected amount of bytes.
*/

ssize_t read_textfile(const char *filename, size_t letters)
