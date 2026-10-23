# 1.University-Management-System-Using-Encapsulation-and-Constructors-Destructors-in-C-
# C++ Student Constructor Demo

## About the Project

This project demonstrates constructors and destructors in C++ using a `Student` class.

## Concepts Covered

- Default constructor
- Parameterized constructor
- Copy constructor
- Member function
- Destructor
- Object creation and destruction

## Program Details

The program initializes student objects, displays their roll numbers and names, copies an existing student object, and demonstrates automatic object destruction.

## Tools Used

- **Programming Language:** C++
- **Online Compiler:** [OnlineGDB C++ Compiler](https://www.onlinegdb.com/online_c++_compiler)
- **Version Control:** GitHub

## How to Run

1. Open `student.cpp`.
2. Copy the source code into the OnlineGDB C++ compiler, or compile it using a local C++ compiler.
3. Run the program.
4. Observe the constructor, student details, and destructor messages.

## Expected Result

The program demonstrates how different constructors initialize objects and how the destructor is called when objects are destroyed.

## Execution Note

The program was run using the OnlineGDB C++ compiler. The source code is included in this repository for reference and learning.

# 2.Shape Area Calculator Using Pointers and References

## Aim
To write a C++ program to calculate the areas of a circle, rectangle, and triangle using pointers, references, and runtime polymorphism.

## Concepts Used
- Abstract class and pure virtual function
- Inheritance
- Pointers and references
- Virtual functions
- Runtime polymorphism
- Const member functions
- Virtual destructor

## Tools Used
- Programming Language: C++
- Compiler: OnlineGDB
- Repository: GitHub

## Program Description
The program defines an abstract `Shape` class and derives `Circle`, `Rectangle`, and `Triangle` classes from it. A base-class pointer is used to calculate the area of each shape, while a reference-based function displays the results.

## Result
Successfully implemented a C++ program demonstrating pointers, references, and runtime polymorphism to calculate the areas of different shapes.

# 3.Matrix Operations Using Operator Overloading in C++

## Aim
To develop a C++ program to perform matrix addition, subtraction, multiplication, and transpose using operator overloading and member functions.

## Concepts Used
- Classes and Objects
- Parameterized Constructor
- Operator Overloading (`+`, `-`, `*`, `[]`, `<<`)
- Matrix Addition and Subtraction
- Matrix Multiplication
- Matrix Transpose
- Friend Function
- Const Member Functions
- Unit Testing using `assert()`

## Program Description
This program defines a `Matrix` class to perform operations on 2×2 matrices. It overloads operators to simplify matrix addition, subtraction, multiplication, element access, and output display. A transpose function is also implemented to interchange matrix rows and columns.

The program uses assertions to verify the correctness of matrix calculations.

## Operations Performed
1. Matrix Addition
2. Matrix Subtraction
3. Matrix Multiplication
4. Matrix Transpose
5. Matrix Element Access

## Technologies Used
- **Programming Language:** C++
- **Compiler:** OnlineGDB C++ Compiler
- **Version Control:** GitHub

## How to Run
1. Open the `matrix_operations.cpp` file.
2. Copy the source code into the OnlineGDB C++ compiler.
3. Click **Run** to execute the program.
4. Check the output for the matrix operations and unit test confirmation.

## Expected Result
The program displays the original matrices, their sum, difference, product, and the transpose of Matrix A. If all assertions pass, the program displays a success message.

## Conclusion
Successfully implemented matrix operations in C++ using operator overloading, member functions, and unit testing.

# 4.Stack and Queue Performance Comparison in C++

### Aim
To compare the execution time of custom Stack and Queue implementations with the Standard Template Library (STL) Stack and Queue in C++.

### Concepts Used
- Templates
- Stack and Queue data structures
- STL (`stack` and `queue`)
- Execution time measurement using `chrono`
- Operation counting

### Program Description
This program implements custom Stack and Queue classes using arrays and compares their performance with the built-in STL Stack and Queue. It measures the execution time required to perform 10,000 insertion and removal operations for each data structure.

The program also counts the total operations performed across all four benchmarks.

### Operations Performed
- Push and pop using a custom Stack
- Push and pop using an STL Stack
- Enqueue and dequeue using a custom Queue
- Push and pop using an STL Queue
- Measure execution time in microseconds
- Display the total number of operations

### Expected Output
The program displays the execution time for each implementation and the total operation count. Timing values vary depending on the system and compiler.

### Technologies Used
- Language: C++
- Compiler: OnlineGDB
- Repository: GitHub

### Conclusion
This program demonstrates how to implement Stack and Queue data structures using templates and compare their execution times with STL implementations. It also introduces basic performance measurement and operation counting.
