# C Programming Reference Repository

## Description

This repository is a structured collection of C programs covering fundamental to intermediate concepts of the C programming language. It serves as a reference and practice resource for students and developers learning systems programming, algorithm implementation, and low-level memory management in C.

## Features

- Control flow constructs: loops (`for`, `while`, `do-while`), conditionals, and switch statements
- Array operations: traversal, reversal, rotation, searching, and matrix manipulation
- String handling: basic operations, pointer-based access, and standard library functions (`strcpy`, `strlen`, etc.)
- Functions: prototypes, pass-by-value, pass-by-reference, and recursive implementations
- Pointers: address arithmetic, pointer-to-array, pointer-to-struct, and function pointers
- Structures and unions: definition, nesting, typedef, arrays of structures, and pointer-based access
- Dynamic memory management: `malloc`, `calloc`, `realloc`, and `free`
- File I/O: reading and writing files using standard C file-handling functions
- Preprocessor directives: macros, macro functions, and conditional compilation
- Pattern printing and mathematical series (AP, GP, Fibonacci, Pascal's triangle)

## Technologies Used

| Component | Details |
|-----------|---------|
| Language  | C (C99 / C11) |
| Compiler  | GCC (GNU Compiler Collection) |
| Editor    | Visual Studio Code |
| Platform  | Linux / Windows |

## Project Structure

```
C-Language/
├── Basic Codes/              # Foundational programs (data types, operators, I/O)
├── LOOPS/                    # Loop constructs and prediction exercises
├── LoopPRIDICT/              # Output prediction exercises for loops
├── if__else/                 # Conditional branching programs
├── PatternPrinting/          # Star and number pattern programs
├── Array/                    # 1-D array operations and algorithms
├── 2D-Array/                 # Matrix operations (transpose, rotation, sum)
├── Strings/                  # String manipulation and built-in function usage
├── Functions/                # Function definitions, recursion, and swap techniques
├── Recursion/                # Recursive implementations of mathematical problems
├── Structure/                # Structs, unions, typedef, and nested structures
├── File_Handling_pre_dyn_mem/# File I/O, preprocessor macros, and dynamic memory
└── README.md
```

## Installation & Setup

### Prerequisites

Ensure GCC is installed on your system.

**Linux:**
```bash
sudo apt update && sudo apt install gcc
```

**Windows:**
Install [MinGW-w64](https://www.mingw-w64.org/) and add it to your system `PATH`.

### Compile a Program

**Linux / macOS:**
```bash
gcc -o output <filename>.c
```

**Windows (MinGW):**
```cmd
gcc -o output.exe <filename>.c
```

## Usage

Navigate to the relevant directory and compile the desired source file.

```bash
# Example: compile and run a dynamic memory allocation program
cd File_Handling_pre_dyn_mem
gcc -o dynmem 6_DynamicMemAlc.c
./dynmem
```

```bash
# Example: compile and run a matrix transpose program
cd 2D-Array
gcc -o transpose 8_Transpose.c
./transpose
```

## Sample Output

```
Enter the size of the array: 5
Enter elements: 10 20 30 40 50

Reversed Array: 50 40 30 20 10
Maximum Element: 50
Minimum Element: 10
Sum of Elements: 150
```

```
Enter rows and columns: 3 3
Matrix:
1 2 3
4 5 6
7 8 9

Transposed Matrix:
1 4 7
2 5 8
3 6 9
```

## Learning Objectives

Upon studying this repository, a learner will be able to:

- Understand memory layout and the role of pointers in C
- Implement common algorithms (search, sort, reversal) using arrays
- Apply dynamic memory allocation and avoid memory leaks
- Work with structured data using `struct` and `union`
- Perform file read/write operations using `FILE`, `fopen`, `fread`, and `fwrite`
- Write modular code using functions, prototypes, and header-style macros
- Trace and predict program output to strengthen debugging skills

## Contributing

1. Fork the repository.
2. Create a feature branch: `git checkout -b feature/topic-name`
3. Commit changes with a descriptive message: `git commit -m "Add: topic-name examples"`
4. Push to the branch: `git push origin feature/topic-name`
5. Open a pull request describing the changes made.

All submitted code must compile without warnings using `gcc -Wall`.

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).  
You are free to use, modify, and distribute this code for educational and personal purposes.
