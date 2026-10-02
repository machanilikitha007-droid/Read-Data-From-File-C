# Read Data From File in C

## Project Description

A simple C program that demonstrates how to read data from a text file using file handling functions. The program opens `data.txt` in read mode, reads the contents character by character, displays them on the screen, and then closes the file.

## Features

- Open a text file in read mode
- Read file contents using `fgetc()`
- Display file contents on the screen
- Check whether the file exists
- Close the file using `fclose()`

## Technologies Used

- C
- File Handling
- `FILE`
- `fopen()`
- `fgetc()`
- `fclose()`

## How to Run

1. Create a file named `read_file.c`.
2. Create a `data.txt` file in the same project folder.
3. Add some text to `data.txt`.
4. Compile the program using a C compiler.
5. Run the program.

Example using GCC:

```bash
gcc read_file.c -o read_file
./read_file


===== Read Data From File =====

File Contents:

Welcome to C File Handling.
This file contains sample text.
The program reads and displays this data.

File closed successfully.

Author

M.Likitha
