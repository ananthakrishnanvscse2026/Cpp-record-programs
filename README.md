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

# 5.Student Grade Analyzer Using STL Algorithms in C++

### Aim
To analyze student marks, assign grades, and identify student performance using C++ STL algorithms.

### Concepts Used
- Classes and objects
- Vector container
- Lambda expressions
- `sort()` – sorts students by marks
- `transform()` – assigns grades
- `find_if()` – finds the first student scoring above 80
- `accumulate()` – calculates total marks
- `max_element()` and `min_element()` – find the highest and lowest scorers
- `count_if()` – counts students scoring 80 or above
- `reverse()` – reverses the student list

### Program Description
The program stores student names and marks in a vector, sorts them in descending order, and assigns grades based on their marks. It calculates the total and average marks, identifies the highest and lowest scorers, and counts students scoring 80 or above.

### Sample Output
- Highest Scorer: Rahul (94)
- Lowest Scorer: Vikram (68)
- Total Marks: 321
- Average Mark: 80.25
- Students scoring 80 or above: 2

### Technologies Used
- Language: C++
- Compiler: OnlineGDB
- Repository: GitHub

### Conclusion
This program demonstrates how C++ STL algorithms simplify student data processing, sorting, searching, grading, and statistical analysis.

# 6.Smart Pointers and RAII in C++

### Aim
To demonstrate Resource Acquisition Is Initialization (RAII) and compare manual resource management with C++ smart pointers.

### Concepts Used
- Classes and objects
- Constructors and destructors
- RAII (Resource Acquisition Is Initialization)
- Custom smart pointer using `operator->()`
- `unique_ptr` for exclusive ownership
- `shared_ptr` for shared ownership
- `weak_ptr` for non-owning resource observation
- `get()` to access the raw pointer
- `reset()` to release a resource
- `use_count()` to check shared ownership count
- `expired()` to check resource availability
- Deleted copy constructor and assignment operator

### Program Description
The program demonstrates how resources are acquired and released using a custom RAII smart pointer and standard C++ smart pointers. It shows exclusive ownership with `unique_ptr`, shared ownership with `shared_ptr`, and non-owning observation with `weak_ptr`.

The program also demonstrates raw pointer access, resource reset, reference counting, and automatic resource cleanup.

### Sample Output
- Resource acquired and released automatically
- Raw pointer available: 1
- After reset: 1
- Shared Pointer Count: 2
- Weak Pointer Expired: 0
- Program completed successfully.

### Technologies Used
- Language: C++
- Standard: C++11
- Compiler: OnlineGDB or a compatible C++ compiler
- Repository: GitHub

### Conclusion
This program demonstrates RAII and smart pointer techniques for safer resource management in C++. It explains how `unique_ptr`, `shared_ptr`, and `weak_ptr` manage ownership and resource lifetime.

### Memory Leak Testing
The program can also be tested with Valgrind in a compatible Linux environment:

```bash
g++ -g smart_pointer.cpp -o smart_pointer
valgrind --leak-check=full ./smart_pointer
```

A clean Valgrind report should show no memory leaks and zero errors.
