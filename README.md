# Arbitrary Precision Calculator (APC) in C

## Description
A command-line Arbitrary Precision Calculator developed in C to perform arithmetic operations on large integers using a doubly linked list. Each digit is stored in a separate node, allowing arithmetic operations beyond the limits of standard integer data types.

## Features
- Addition of large integers.
- Subtraction of large integers, including negative results.
- Multiplication of large integers.
- Integer division with quotient output.
- Doubly linked list representation of numbers.
- Command-line input for operands and operators.
- Input validation for arithmetic operators.

## Technologies Used
- **Programming Language:** C
- **Data Structure:** Doubly Linked List
- **Concepts:** Pointers, Dynamic Memory Allocation, Linked Lists, Arithmetic Algorithms, Modular Programming

## Project Structure
- `main.c` – Processes command-line arguments and selects the arithmetic operation.
- `main.h` – Defines structures, macros, and function declarations.
- `create_list.c` – Converts input numbers into doubly linked lists.
- `addition.c` – Implements addition.
- `subtraction.c` – Implements subtraction.
- `multiplication.c` – Implements multiplication.
- `division.c` – Implements integer division.
- `compare.c` – Compares two numbers.
- `insert_at_first.c` – Inserts digits at the beginning of a list.
- `insert_at_last.c` – Inserts digits at the end of a list.
- `print_list.c` – Displays the result.
- `delete_list.c` – Frees dynamically allocated list nodes.

## Compilation
Run the following command inside the project directory:

```bash
gcc main.c create_list.c addition.c subtraction.c multiplication.c division.c compare.c insert_at_first.c insert_at_last.c print_list.c delete_list.c -o apc
```

## Execution
Use the format:

```bash
./apc <operand1> <operator> <operand2>
```

### Sample Operations
**Addition**
```bash
./apc 123456789012345 + 987654321098765
```

**Subtraction**
```bash
./apc 5000 - 1234
```

**Multiplication**
```bash
./apc 12345 '*' 6789
```

**Division**
```bash
./apc 1000 / 25
```

## Concepts Learned
- Implementing a doubly linked list.
- Performing arithmetic operations digit by digit.
- Managing carry and borrow operations.
- Dynamic memory allocation and deallocation.
- Comparing large integers.
- Modular programming in C.

## Author
Soundharya Lahari Uppula
