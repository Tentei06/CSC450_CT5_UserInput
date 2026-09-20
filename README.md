# CSC450 CT5 - User Input and File I/O

A C++ console application demonstrating user input, file input/output, file appending, and character reversal.

## Overview

This project was created for the Module 5 Critical Thinking assignment in CSC450 Programming III at CSU Global.

The program accepts text input from the user and appends it to an existing text file without deleting the data already stored in the file. It then reads the complete contents of the file, reverses all characters, and stores the reversed result in a separate output file.

## Features

- Accepts a full line of text from the user
- Appends user input to an existing text file
- Preserves the original contents of the provided file
- Reads the complete file character by character
- Reverses all characters in the file
- Writes the reversed contents to a separate text file
- Checks that files open successfully before reading or writing
- Provides console messages confirming successful operations

## File Reversal

The assignment requires the program to reverse all characters in the original file.

This implementation treats the entire file as one sequence of characters, including spaces and newline characters. As a result, reversing the complete sequence also reverses the order of the lines in the output file.

## Project Files

- `CSC450_CT5_UserInput.cpp` - C++ source code and pseudocode
- `CSC450_CT5_mod5.txt` - Instructor-provided input file with appended user data
- `CSC450-mod5-reverse.txt` - Output file containing the reversed contents
- `README.md` - Project documentation
- `LICENSE` - MIT License
- `.gitignore` - Excludes compiled and unnecessary files from version control

## Concepts Demonstrated

- Console input and output
- `std::string`
- File input and output
- `ifstream` and `ofstream`
- Append mode with `ios::app`
- File validation with `is_open()`
- Character-by-character file reading
- Loops and string manipulation
- Basic error handling

## Building and Running

This project was developed and tested using VS Code with the MSYS2 MinGW-w64 C++ compiler.

Compile the program:

    g++ CSC450_CT5_UserInput.cpp -o CSC450_CT5_UserInput

Run on Windows:

    .\CSC450_CT5_UserInput.exe

The program expects `CSC450_CT5_mod5.txt` to be located in the same directory as the executable.

## Example

The program prompts the user to enter text:

    Enter text to add to the file: File input and output allows C++ programs to store and retrieve data.

The text is appended to `CSC450_CT5_mod5.txt` while preserving its existing contents.

The program then creates `CSC450-mod5-reverse.txt`, containing the complete contents of the original file in reverse character order.

## Security and Error Handling

Because the program works with user input and external files, it includes basic checks to verify that each file opens successfully before attempting to read or write data.

The original file is opened using `ios::app` when user data is added. This prevents the program from unintentionally overwriting the existing contents of the instructor-provided file.

Additional input validation and restrictions could be added in a larger application depending on how the entered data would ultimately be used.

## Author

Cody G. Walker  
CSC450 - Programming III  
CSU Global

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

```bash
g++ CSC450_CT5_UserInput.cpp -o CSC450_CT5_UserInput
