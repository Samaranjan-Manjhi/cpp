###############
https://www.tpointtech.com/cpp-tutorial
https://www.tutorialspoint.com/data_structures_algorithms/index.htm
###############

/*--------------------------------------------------------------------------------------------------------------------------------------------------*/

###C++ Tutorial

#What is C++?
C++ is a general-purpose programming language that was developed by Bjarne Stroustrup at Bell Labs in the early 1980s. The C++ language is an extension to the C language and provides several additional features, such as object-oriented programming, exception handling, and templates. It is mainly used to create system software, high-performance applications, embedded systems, game development, GUI, and many other applications.
     #A general-purpose programming language (GPL) is a programming language designed to be broadly applicable across a wide variety of application domains and to solve a wide array of computing problems, rather than being limited to a specific area like a domain-specific language (DSL). Examples include languages like Python, Java, C, and JavaScript, which can be used for tasks such as web development, scientific computing, game creation, and more.


#Features of C++
There are several features of the C++ programming language. Some of them are as follows:

    It is an object-oriented, procedural, and middle-level programming language.
    C++ is used to create high-level applications.
    It is a highly preferred programming language that is used for cross-platform applications.
    It is compatible with multiple platforms.
    It supports both operator overloading and function overloading.
    It offers low-level memory manipulation with pointers.
    It provides several built-in functions and operators.

# using namespace std;
using namespace std; is a C++ statement that brings all names from the std (standard) namespace into the current scope, allowing you to use standard library components like cout and cin without the std:: prefix. While convenient for beginners and small programs by reducing typing, it's generally considered bad practice in larger projects because it can cause name collisions and makes code less clear by potentially obscuring where an identifier originates from. For better practice, you should use the scope resolution operator (::) to explicitly specify the namespace (e.g., std::cout) or use a selective using declaration (e.g., using std::cout;)

#Why Learn C++?
It includes several features of procedural, object-oriented, and generic programming languages that help to write efficient, reusable, and flexible code. These excellent features make it a better choice for developing system software, GUI, and several other applications. Here we have described some of the main advantages of learning C++:

    C++ is an easy-to-learn and implement.
    It offers Cross-Platform Support that enables you to run C++ programs on multiple operating systems.
    Using C++, developers can develop system software, game development applications and many others.
    It provides a large community and resources.

#Object-Oriented Programming (OOP)
C++ supports object-oriented programming, and the four major pillars of object-oriented programming (OOP) used in C++ are:

    Inheritance
    Polymorphism
    Encapsulation
    Abstraction

#C++ Standard Libraries
Standard C++ programming is divided into three important parts:

    The core library includes the data types, variables, literals, etc.
    The standard library includes a set of functions that manipulate strings, files, and many others.
    The STL includes a set of methods to manipulate a data structure.

#Usage of C++
With the help of the C++ programming language, you can develop different types of secure and robust applications. Some of them are as follows:

    Window application
    Client-Server application
    Device drivers
    Embedded firmware etc


/*--------------------------------------------------------------------------------------------------------------------------------------------------*/

###Difference between C and C++

#Definition
C is a structural programming language, and it does not support classes and objects. On the other hand, C++ is an object-oriented programming language that supports the concept of classes and objects.

#Type of programming language
C supports the structural programming language where the code is checked line by line. On the other hand, C++ is an object-oriented programming language that supports the concept of classes and objects.

#Developer of the language
Dennis Ritchie developed C language at Bell Laboratories. On the other hand, Bjarne Stroustrup developed the C++ language at Bell Labs circa 1980.

#Subset
C++ is a superset of C programming language. C++ can run 99% of C code but C language cannot run C++ code.

#Security
In C, the data can be easily manipulated by the outsiders as it does not support the encapsulation and information hiding while C++ is a very secure language, i.e., no outsiders can manipulate its data as it supports both encapsulation and data hiding. In C language, functions and data are the free entities, and in C++ language, all the functions and data are encapsulated in the form of objects.

#Function Overloading
Function overloading is a feature that allows us to have more than one function with the same name but varies in the parameters. C does not support the function overloading, while C++ supports the function overloading.

#Function Overriding
Function overriding is a feature that provides the specific implementation to the function, which is already defined in the base class. C does not support the function overriding. On the other hand, C++ supports the function overriding.

#Keywords
C contains 32 keywords, and C++ supports 52 keywords.

#Namespace feature
A namespace is a feature that groups the entities like classes, objects, and functions under some specific name. C does not contain the namespace feature, while C++ supports the namespace feature that avoids the name collisions.

#Exception handling
C does not provide direct support to the exception handling; it needs to use functions that support exception handling. C++ provides direct support to exception handling by using a try-catch block.

#Input/Output functions
In C, scanf and printf functions are used for input and output operations, respectively, while in C++, cin and cout are used for input and output operations, respectively.

#Memory allocation and de-allocation
C supports calloc() and malloc() functions for the memory allocation, and free() function for the memory de-allocation. On the other hand, C++ supports a new operator for the memory allocation and delete operator for the memory de-allocation.

#Header file
C program uses <stdio.h> header file while C++ program uses <iostream.h> header file.



/*----------------------------*/


### 2. Basic Syntax
- Variables

Variables are the fundamental building blocks of data manipulation and storage in programming, which acts as dynamic containers for data in the C++ programming language. A variable is more than just a memory label. It is a named storage location of data in memory. It serves as a link between abstract ideas and concrete data storage, which allows programmers to carefully manipulate data.

Developers may complete a wide range of tasks using variables, from simple arithmetic operations to complex algorithmic designs. These programmable containers can take on a variety of shapes, such as integers, floating-point numbers, characters, and user-defined structures, each of which has a distinctive impact on the operation of the program.

    Programmers follow a set of guidelines when generating variables, creating names that combine alphanumeric letters and underscores while avoiding reserved keywords.
    More than just placeholders, variables are what drive user input, intermediary calculations, and the dynamic interactions that shape the program environment.
    A variable is the name of a memory location. It is used to store data. Its value can be changed, and it can be reused many times.
    It is a way to represent memory location through symbols so that it can be easily identified.

Syntax:

Let us see the syntax to declare a variable:
    type variable_list;  

Where,
    Type: The assigned variable must specify its data type as either int, float, or char.
    variable_name: The name that defines the variable is variable_name.

Rules for defining variables:
    Valid characters: A variable can have alphabets, digits, and underscore.
    Start with letters or underscores: A variable name can start with alphabet and underscore only. It cannot start with a digit.
    No spaces: No white space is allowed within the variable name.
    Avoid reserved keywords: A variable name must not be any reserved word or keyword e.g. char, float, etc.
    Case Sensitive: It is case sensitive.

Valid and invalid variable names in C++:
Valid variable names:
    int a;
    int _ab;
    int a30;

Invalid variable names:
    int 4;
    int x y;
    int double;

Scope of Variables:
C++ uses a variable scope to define regions where program code can access a variable and variable lifetime to determine its operational duration.

    Local Variables: A local variable gets its declaration space inside a function where programmers can access it only from within that function.
    Global Variables: Programs can access Global Variables through declarations that exist outside of function definitions.
    Static Variables: Static variables maintain their function-scoped value between multiple function executions, even if they are declared locally.

Uses of C++ Variables:
There are several uses of variables in C++. Some main uses of C++ variables are as follows:
    Important Ideas: Programming is fundamentally based on C++ variables, which allow for the storing, manipulation, and interaction of data inside a program.
    Memory Storage: Variables are named memory regions that may hold values of different data kinds, ranging from characters and integers to more intricate user-defined structures.
    Dynamic character: Programming that is responsive and dynamic is made possible by the ability to assign, modify, and reuse data through variables.
    Data Types: The several data types that C++ provides, including int, float, char, and others, each define the sort of value that a variable may store.
    Variable declaration: Use the syntax type variable_name to define a variable, containing its type and name.
    Initialization: When a variable is declared, it can be given a value, such as int age = 25.
    Rules and Naming: Variable names must begin with a letter or an underscore, avoid reserved keywords, and be composed of letters, numbers, and underscores.
    Reusability and Modularity: Variables with appropriate names make code easier to comprehend, encourage modularity, and allow for code reuse.
    Applications in the Real World: Variables are used in a variety of applications, including web applications, system programming, and scientific simulations.

1. What is a variable in C++?
A C++ variable creates a named memory location that contains data values. A variable contains an associated data type that defines its valid storage values, including integers and floating-point numbers and characters.
Programmers must declare each variable before its first usage. The programming language offers users a way to work with data through dynamically changeable memory storage locations named variables.

2. What steps do you need to follow when declaring and initializing variables in C++?
In order to create a variable, we first specify its data type, followed by an identifier that represents its name. During initialization, the variable receives its initial assigned value.
The declaration "int x = 10;" creates an integer variable named "x" while giving it the value of 10. Initialization prevents undefined behavior. We can declare variables without initial values as demonstrated by int y; The C++ language provides three initialization methods: direct initialization, copy initialization, and list initialization through braces {}.

3. What are the different types of variables in C++?
C++ arranges its variables through different categories based on their scope together with their lifetime rules. Local variables in C++ exist between the start and end of a function execution after their declaration inside the function body.
When variable declared outside functions, global variables retain access across the entire program scope. Static variables retain their value between function calls. CPU registers store register variables, which enables quick access to them. After initialization, the value of constant variables (const) cannot be modified.

4. What exactly distinguishes const variables from volatile variables?
The value of a const variable remains fixed because it becomes an immutable reference after the initialization stage. We can use this approach to define constants through const double PI = 3.14. A volatile variable informs the compiler about changes from outside program control, which can happen to values at any time (such as hardware registers).
The compiler keeps volatile variables free from optimizations to guarantee their precise access. A combination of const volatile indicates that the value is changeable but needs external modification.

5. How does C++ handle variable scope and lifetime duration?
The location of variable accessibility is defined by scope, whereas memory duration is controlled through lifetime. A variable becomes locally available when a function starts running, and it persists until the function code concludes. The scope of global variables spans their entire program runtime and continues from the beginning until the code finishes executing.
A static variable maintains its stored value when a program moves between different function executions. Block scope variables exist only between the {} braces. Memory management and unexpected behavior prevention become possible when developers understand scope and lifetime.

------------------------------------------------------------------------------------------------------------------------------------------------------

- Data Types
Data types in C++ specify the types of data variables that may be stored, as well as how much memory they can hold and what operations are allowed. Three general categories can be used to classify C++ data types:

    Fundamental
    Derived
    User-defined

1. Fundamental (Built-in) Data Types:

These data types serve as the basis for data representation and are predefined by the C++ language. They establish the types of data a variable can hold, how much memory it can hold, and what activities it may be used for. Among these, integer types are frequently used for indexing, general data storage, and numerical computations. These are fundamental types:

    Integer Types
    Floating-Point Types
    Character Type
    Boolean Type
    Void Type

a. Integer Types (int):
Whole numbers without decimal places are stored in the int (integer) data type. For representing numerical values that do not need fractional precision, it is one of the most widely used data types in C++.

i. Signed int: Usually it uses 4 bytes of memory to store both positive and negative integers. For a 32-bit system, it accepts values between -2,147,483,648 and 2,147,483,647.
Example:
    signed int a = -10;  

ii. Unsigned int: It only stores positive integers (0 and above) in a 4-byte memory range. The range of positive values (0 to 4,294,967,295) is twice as large as that of a signed integer, which ranges from -2,147,483,648 to 2,147,483,647.
Example:
    unsigned int x = 18;  

iii. Short int: A smaller integer type that usually requires two bytes of memory. It has a limited range (-32,768 to 32,767 for signed short) but saves memory in constrained environments.
Example:
    short int a = 1000;  

iv. Long int: Usually takes up 4 or 8 bytes, this type of int is used for storing large numbers than a regular int. The system architecture determines its range, although on a 32-bit system, it is comparable to int.
Example:
    long int a = 1000000;  


b. Floating-Point Types:
For storing real numbers, including fractions and decimals, C++ provides three main floating-point data types. These types offer different levels of precision and memory usage, which makes them suitable for a variety of numerical computations.

i. float (single precision): Float (Single Precision) uses 4 bytes, which provides 6-7 decimal digits of precision. It works well for basic computations that do not need to be extremely accurate.
Example:
    float e = 49.4f;  

ii. double (Double Precision): For floating-point arithmetic, the default value is Double (Double Precision), which uses 8 bytes and provides 15-16 decimal digits of precision.
Example:
    double i = 4.478390278462748;  

iii. long double (Extended Precision): For scientific calculations that demand a high level of accuracy, long double (Extended Precision) is utilized. It utilizes more than 10 bytes and provides 19 to 21 decimal places of accuracy.
Example:
    long double h = 6.987271836478124679L;  


c. Character Type (char):
In C++, a single character can be stored in a single byte (8 bits) of memory by utilizing the char data type. The ASCII (American Standard Code for Information Interchange) encoding is mostly used to represent characters. However, wchar_t, char16_t, and char32_t are utilized to provide UTF-16 and UTF-32 encoding for Unicode characters. These data types can be used to represent any character from the ASCII or Unicode set, including numbers, letters, symbols, and more.
Example:
    char letter = 'A';  


d. Boolean Type (bool):
In C++, the Boolean data type (bool) stores logical values that encode the concepts of true and false. In control flow, conditional statements, and decision-making, it is primarily used for the effective evaluation of logical expressions and conditions.

Example:
    bool b = true;  
    bool f = false;  

e. Void Type (void):

The void type in C++ denotes the lack of a data type. It is mostly used to define generic pointers, which specifies that a function does not return a value, and determine functions with undefined arguments. In contrast to other data types, void has no value and cannot be used directly to declare variables.


2. Derived Data Types
Derived data types are constructed from basic types to improve functionality and make complex data processing and storage possible. These types of features enable structured programming approaches to handle data efficiently and provide efficient memory management.
Types of Derived Data Types:

Several types of derived data types are as follows:
    Arrays
    Pointers
    References

a. Arrays:
A fixed-size collection of elements with the same type that is stored in consecutive memory places is called an array. By storing multiple values under a single variable name, arrays improve the efficiency of data manipulation.

i. One-Dimensional Array:
A linear collection of elements that are sequentially stored in memory is called a one-dimensional array. It is useful for storing lists of values because it is declared with a single index.
Example:
    int a[3] = {15, 32, 53};  

ii. Multi-Dimensional Array (2D, 3D, etc.):
A multi-dimensional array is an array of arrays that is commonly used to represent matrices or grids. Higher dimensions extend the rows and columns found within a 2D array.
Example:
    int a[3][3] = {{13, 21, 56}, {34, 25, 76}, {17, 48,2 9}};  

iii. Dynamic arrays:
Runtime dynamic array allocation is accomplished with pointers and new keywords. They need to be manually deallocated, but they allow flexible memory usage.
Example:
    int* a = new int[5]; delete[] a;  


b. Pointers:
A pointer is a variable that holds the address of another variable in memory. It improves the efficiency of memory manipulation by storing a reference to a memory location rather than a direct value. Data structures, dynamic memory allocation, function pointers, and efficient parameter passing in functions all depend on pointers.








