# Lesson 5 - Introduction

1. **system("pause");**
For the stops the program and alert to "Press any key to continue...".

___
        #include <iostream>

        using namespace std;

        int main()

        {

            cout << "Hello World!" << endl;

            system("pause");
            
            return 0;
        }

2. VSCode has a feature calling **breakpoint**. This is a red button near the line number and it can stop the program when program reach that line. It's useful for debugging.

# Lesson 6 - Comment

1. For comment; 

___
        /* 
        Comment
        */
___

2. For reference, tutorialpoints.com

# Lesson 7 - main Function

1. Main Function is general adress in hardware to use where a program start the executes.

2. Return, return function if it's execute succesfully.

3. You can use C library, when you're develop in C++!

___
        // first example

        #include <iostream> // C++ Library

        // using namespace std;

        int main() // general address where program executes
        {          // scope

            std::cout << "Hello World!" << std::endl;

            return 0;
        }
___

# Lesson 8 - Introduction to Data Types 

### Basic Data Types

- **type -> how many bytes are used**

#### Primitive built-in types

1. booleen- bool "true/false"
2. character - char "abc"
3. integer - int 1,2,3...
4. floating point - float
5. double floating point - double
6. valueless - void
7. wide character - wchar_t

- **with some spesific keywords relation to add before and after to the code**

1. signed //change required bytes
2. unsigned
3. short
4. long

___

        // Basic syntax examples

        #include <stdio.h>
        #include <iostream>

        using namespace std;

        int main()

        {
            int a = 5; // 0000 0101 computer sees like this!
            double b = 5.5;

            int c = 5.2;

            printf("Value of C is %d\n", c);
            printf("Value of B is %lf\n", b);

            cout << "size of char : " << sizeof(char) << endl;
            cout << "size of double : " << sizeof(double) << endl;
            cout << "size of float : " << sizeof(float) << endl;

            return 0;
        }
___

# Lesson 9 - typedef and enam

- **You can create a typed-variable with using `typedef`**
- **We can create a name for variable with using `enam`**

___
        // Typedef

        #include <iostream>

        using namespace std;

        typedef double Pressure_Unit;

        int main()

        {
            double Pres_measurement;
            Pressure_Unit Pres_measurement2;

            Pres_measurement = 5.2;
            Pres_measurement2 = 4.2;

            cout << "Pressure value : " << Pres_measurement << endl;
            cout << "Pressure value : " << Pres_measurement2 << endl;

            return 0;
        }

        // Enum

        #include <iostream>

        using namespace std;

        enum color
        {
            red = 255, // integer
            green = 140,
            blue = 18
        } c;

        int main()
        {
            cout << "blue type value is " << blue << endl;
            cout << "red type value is " << red << endl;
            cout << "green type value is " << green << endl;

            return 0;
        }
___

# Lesson 11 - Scope

1. scope is a space where we can writing code specified for our work. there are 2 types of scope; global and local. scope creating with bracelets ({ ... }). 

2. when a local scope closed, all ***local*** variable will delete.

___
        #include <iostream>

        using namespace std;

        int a = 7; // global variable

        int main()
        { // function scope
            int a = 12;
            {              // local scope
                int a = 8; // local variable
                cout << "Internal scope " << a << endl;
            }

            cout << "Function scope " << a << endl;

            return 0;
        }
___

# Lesson 12 - Constant Modifier - Definition

1. We are using `#define` and `const` keyword for declare a constant variable;

**You have to attention you're must not identify same variable in active local scope!**

        // define
        #include <iostream>

        using namespace std;

        // you can use define like this;
        #define LENGTH 5
        #define WIDTH 5

        int main()
        {
            int area;

            area = LENGTH * WIDTH;
            cout << "Area of defined keywords " << area << endl;
            return 0;
        }

        // "const" keyword



        #include <iostream>

        using namespace std;

        // you can use const keyword there;
        const int LENGTH = 10;
        const int WIDTH = 5;

        int main()
        {
            // you can use const keyword there;
            const int LENGTH = 10;
            const int WIDTH = 5;

            int area;
            
            area= LENGTH*WIDTH;

            cout << "Area of const keyword: " << area << endl;

            return 0;
        }

# Lesson 13 - C++ Modifiers

**signed, unsigned, long, short, constant, volatile and restricts are C++'s modifiers.**

- modifiers are using mostly memory usage restriction.

- for variable (number) limits.

1. signed and unsigned modify variable's bit organizaton. 

2. const make variable unchangeable.

3. volatile, make variable be changeable. (useful when using import value.)

4. restrict, you can change just initial phase.

___
        // C++ Modifiers
        #include <iostream>

        using namespace std;

        int main()
        {
            short int i;
            short unsigned int j; // bit organization
            j = 50000;
            i = j;

            // 0000 1111    short int
            // 1111 0000    short unsigned int

            cout << sizeof(short int) << endl;
            cout << sizeof(short unsigned int) << endl;
            
            cout << "I value " << i << "J value" << j << endl;
            
            return 0;
        }
___