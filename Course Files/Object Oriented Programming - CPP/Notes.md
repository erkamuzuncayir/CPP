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

# Lesson 14 - C++ Operators

**Operators' are using for mathematical manipulations in C++.**

*There are five types of operators in C++.*

- Arithmetic Operators

        1. Addition (+) | x + y
        2. Substraction (-) | x - y
        3. Multiplication (*) | x * y
        4. Division (/) | x / y
        5. Modulus (%) | x % y
        6. Increment (++) | ++x
        7. Decrement (--) | --x

- Assignment Operators

        1. =	x = 5	x = 5	
        2. +=	x += 3	x = x + 3	
        3. -=	x -= 3	x = x - 3	
        4. *=	x *= 3	x = x * 3	
        5. /=	x /= 3	x = x / 3	
        6. %=	x %= 3	x = x % 3	
        7. &=	x &= 3	x = x & 3	
        8. |=	x |= 3	x = x | 3	
        9. ^=	x ^= 3	x = x ^ 3	
        10. >>= x >>= 3	x = x >> 3	
        11. <<= x <<= 3	x = x << 3

- Comparison Operators

        ==	Equal to	x == y	
        !=	Not equal	x != y	
        >	Greater than	x > y	
        <	Less than	x < y	
        >=	Greater than or equal to	x >= y	
        <=	Less than or equal to	x <= y

- Logical Operators

        && 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10	
        || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4	
        !	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

- Bitwise Operators (&, |, ~, ^, <<, >>)

A = 0011
B = 1010

A&B = 0010
A|B = 1011
~A = 1100

___

        // C++ Operators

        // Arithmetic Operators
        #include <iostream>

        using namespace std;

        int main()
        {
            int num1, num2, result;

            num1 = 5; // assignment operator (=)
            num2 = 2; // assignment operator (=)

            result = num1 + num2; // arithmetic
            result = num1 * num2;
            result = num1 / num2;

            cout << "Result is : " << result << endl;

            return 0;
        }

        // Comparison (Relational) Operators

        #include <iostream>

        using namespace std;

        int main()
        {
            int a = 2;
            int b = 2;

            if (a > b)
            {
                cout << "A is greater than B" << endl;
            }
            else
            {
                if (a == b)
                {
                    cout << "A is equal to B" << endl;
                }
                else
                {
                    cout << "B is greater than A" << endl;
                }
            }
            return 0;
        }

        #include <iostream>

        using namespace std;

        int main()
        {
            unsigned char a = 5, b = 9;
            // a = 0000 0101 << 1 => 0000 1010, << 2, 0001 0100
            // b = 0000 1001

            cout << "A&B" << (a & b) << endl;
            cout << "A|B" << (a | b) << endl;
            cout << "A<<" << (a << 2) << endl;

            int c = 5; // assignment

            c += 5;

            cout << "C is : " << c << endl;

            cout << "Sizeof char " << sizeof(char) << endl;

            return 0;
        }

___

# Lesson 15/16 - C++ Loops

**We are using loops in C++ for execute same code/codeblock several times under some conditions**

*There are three types of loop syntax in C++.*

- ***While***

___
        // C++ Loops

        // While Loops
        #include <iostream>

        using namespace std;

        int main()
        {
            int ite = 0;

            while (iter < 10)
            {
                cout << "Hello CPP " << iter << endl;
                iter++;
            }

            // while ((iter++ < 10) !=0 )
            while (iter++ < 10) // if it is true, it continues
            {
                cout << "Hello CPP " << iter << endl;
            }

            // while (1 =! 0)
            while (1) // endless loop
            {
                cout << "Hello CPP " << endl;
            }
            return 0;
        }
___

- ***For***

Creating a for loop we're using this template;

        for (initial; conditiion; increment)
        {
            statemenet(s);
        }
__

__

        // C++ Loops

        // For Loops
        #include <iostream>

        using namespace std;

        int main()
        {

            for (int iter = 0; iter < 10; iter = iter + 1)
            {
                cout << "Hello CPP " << iter << endl;
            }

            //

            int a = 0;

            for (; a < 10;) //  Endless Loop
            {
                cout << "Hello CPP" << endl;
            }

            //
            //  (1) == 0
            for (int iter = 10; (iter > 0) == 0; iter = iter - 1)
            {
                cout << "Hello CPP" << iter << endl;
            }

            //

            int iter = 0;
            for (; iter < 10;)
            {
                cout << "Hello CPP" << iter << endl;
                iter = iter + 1;
            }

            //

            int iter2 = 0;
            int iter3 = 0;
            for (int iter = 0; ((iter < 10) && (iter2 < 5) && (iter3 < 3)) != 0; iter = iter + 1)
            {
                cout << "Hello CPP " << iter << endl;
                iter2 = iter2 + 1;
                iter3 = iter3 + 1;
            }

            for (;;)
            {
                cout << "Endless Loop" << endl;
            }
            return 0;
        }
___

- ***Do ... while***

**We are using "do...while" when we want our codes execute at least once time.**

___

        // C++ Loops

        // For Loops
        #include <iostream>

        using namespace std;

        int main()
        {

            int a = 0;

            do
            {
                cout << "Do While Loop" << a << endl;
                a = a + 1;
            } while (a < 5);

            return 0;
        }
___

# Lesson 17 - C++ Nested Loops

**We are using nested loops for when we want to filling up dimensional array, class or sorting algorithms**

___

        // C++ Nested Loops
        #include <iostream>

        using namespace std;

        int main()
        {

            int i, j;

            for (i = 0; i < 3; i++) //  running
            {
                cout << "i loop" << endl;
                for (j = 0; j < 3; j++) //  breaking
                {
                    if (i >= 1)
                        break;

                    cout << "i and j: " << i << " " << j << endl;
                }
            }

            return 0;
        }
___

# Lesson 18 - Decision Making Rules

C++ has three types of decision making syntax option.

- if
- if..else
- switch
- nested if, switch

**if you're write more than one codeline you must use a scope with in these syntaxs.**

___
        // C++ If, else 
        #include <iostream>

        using namespace std;

        int main()
        { // if and if...else example
            int a = 15;
            if (a > 5)
                cout << "A is greater than 5" << endl;
            else
            {
                cout << "A is greater than 5 again" << endl;
                cout << "A is greater than 5 again and again" << endl;
            }

            return 0;
        }

        // Switch, nested if...else, switch
        #include <iostream>

        using namespace std;

        int main()
        { // switch

            int score = 25;
            switch (score)
            {
            case 25:
            {
                if (score != 25)
                    cout << "Fail" << endl;
                else
                    cout << "Maybe next time" << endl;
            }
            case 50:
            {
                cout << "Normal" << endl;
                break;
            }
            case 75:
            {
                cout << "Success" << endl;
                break;
            }
            default:
            {
                cout << "Invalid Argument" << endl;
                break;
            }
            }
            return 0;
        }
___

# Lesson 19 - C++ Functions

**Functions are performing task scope's.**
**We have to aware our function must be declared or defined before the main function.**
*Contain;*
1. Scope {codes}
2. return type
3. name
4. parameter list

- reading flexibility
- specific process
___
    return_type function_name(parameter list){
        body of the function

        return value;
    }
___

___
        // C++ Functions
        #include <iostream>

        using namespace std;

        // int sum(int a, int b = 100) //  we can assign default value for function's parameters.
        // {
        //     int result;

        //     result = a + b;

        //     cout << "sum int func " << endl;

        //     return result;
        // }

        int sum(int, int);          //  function declaration
        double sum(double, double); //   second function declaration

        int main() //  address

        {
            int num1, num2, result;
            double numd1, numd2, result2;
            num1 = 1;
            num2 = 5;

            numd1 = 5.1;
            num2 = 4.2;

            result = sum(num1, num2);
            result2 = sum(numd1, numd2);

            cout << "Result int is: " << result << endl;
            cout << "Result double is: " << result2 << endl;

            return 0;
        }

        // calling operator -> ()

        int sum(int a, int b) //  function definition, address too.
        {
            int result;

            result = a + b;

            cout << "sum int func " << endl;

            return result;
        }

        double sum(double a, double b) // second function with same name but different data type
        {
            double result;

            result = a + b;

            cout << "sum double func " << endl;

            return result;
        }
___

# Lesson 21 - C++ Calculator Example

___

        #include <iostream>

        using namespace std;

        enum OperationCodes
        {
            SumOp = 1,
            SubstractOp = 2,
            MultiplyOp = 3,
            DivideOp = 4,
            ExitOp = 5,
        };

        //  declaration of functions
        int sum();
        int substract();
        int multiply();
        int divide();
        void display_operations();

        int main()

        {
            int choice = 0;

            while (choice != ExitOp)
            {
                cout << "Please select the desired operation : \n\n ";
                display_operations();
                cin >> choice;

                switch (choice)
                {
                case SumOp:
                    sum();
                    break;
                case SubstractOp:
                    substract();
                    break;
                case MultiplyOp:
                    multiply();
                    break;
                case DivideOp:
                    divide();
                    break;
                default:
                    cout << "Please select appropiate values. Try again!" << endl;
                    break;
                }
            }
            return 0;
        }

        void display_operations()
        {
            cout << "Sum for 1" << endl;
            cout << "Substract for 2" << endl;
            cout << "Multiply for 3" << endl;
            cout << "Divide for 4" << endl;
            cout << "Exit for 5" << endl;
            cout << endl;
        }

        int sum()
        {
            cout << "Please enter two integer numbers : ";
            int a, b;
            cin >> a;
            cin >> b;

            cout << "The sum of two variables : " << (a + b) << endl;

            return a + b;
        }
        int substract()
        {
            cout << "Please enter two integer numbers : ";
            int a, b;
            cin >> a;
            cin >> b;

            cout << "The substract of two variables : " << (a - b) << endl;

            return a - b;
        }
        int multiply()
        {
            cout << "Please enter two integer numbers : ";
            int a, b;
            cin >> a;
            cin >> b;

            cout << "The multiply of two variables : " << (a * b) << endl;

            return a * b;
        }
        int divide()
        {
            cout << "Please enter two integer numbers : ";
            int a, b;
            cin >> a;
            cin >> b;

            cout << "The divide of two variables : " << (a / b) << endl;

            return a / b;
        }
___

# Lesson 22 - Numbers and Generating Random Number

___

        #include <iostream>
        #include <cmath>
        #include <cstdlib>
        #include <ctime>

        using namespace std :
            /* built-in CPP compiler object

            type - int, double, float, short int
            long int

            */

            // ex1

            int
            main()
        {
            // number definiton
            short s; // for store bytes
            int i;
            double d;

            // assignment
            s = 10;
            i = 100;
            d = 3094.24;

            cout << "short s: " << s << endl;
            cout << "int i: " << i << endl;
            cout << "double d: " << d << endl;

            return 0;
        }

        // ex2 - math operations

        /*
        cos()
        sin()
        pow()
        sqrt()
        */

        int main()
        {
            // number definition
            short s; // for store bytes
            int i;
            double d;

            // assignment
            s = 1;
            i = 10;
            d = 1.44;

            cout << "short sin(s) : " << sin(s) << endl;
            cout << "int pow(i, 2) : " << pow(i, 2) << endl;
            cout << "double sqrt(d) : " << sqrt(d) << endl;

            return 0;
        }

        // ex3 - random number in C++

        int main()
        {
            int i, j;

            // seed value
            srand((unsigned)time(NULL));

            for (i = 0; i < 5; i++)
            {
                // generate random number
                j = rand();
                cout << "Random number is : " << j << endl;
            }
            return 0;
        }

___

# Lesson 23 - C++ Rolling Dice Game

___

        #include <iostream>
        #include <cmath>
        #include <cstdlib>
        #include <ctime>

        using namespace std;

        int rollDie()
        {
            int roll;
            int min = 1;
            int max = 6;

            roll = rand() % (max - min + 1) + min;

            return roll;
        }

        int main()
        {
            srand((unsigned)time(NULL)); // seed value
            for (int k = 0; k < 2; k++)
            {
                for (int i = 0; i < 3; i++)
                {
                    cout << "Rolling Dice: " << rollDie() << " " << rollDie() << endl;
                }
                cout << endl;
            }
            return 0;
        }
___

# Lesson 24-25 - C++ Array

**We are using arrays for creating specified and arranged storage address in memory.**

___

        #include <iostream>

        using namespace std;

        int main()

        {
            // initialize

            int a[5]; // if we create an array like this, computer assign garbage values inside of our array.

            int a[3] = {5, 4, 2}; // Thus we create an array with values and length of array.
            int a[] = {5, 4, 2};  // In this way we create an array with values but not length of array.
            // Index 0 -> 5, Index 1 -> 4, Index 2 -> 2

            cout << "First element " << a[0] << endl;
            cout << "Second element " << a[1] << endl;
            cout << "Third element " << a[2] << endl;

            return 0;
        }
___

# Lesson 26 - C++ Array - 3

___

        // Lesson 26 - Array - 3
        #include <iostream>
        int func(int);

        using namespace std;

        int main()
        {
            int array[10];
            int i = 0;

            for (int i = 0; i < 10; i++) // creating an array with using for loop
            {
                array[i] = 1;
            }

            while (i < 10) // creating an array with using while loop
            {
                a[func(i)] = i;
                i = i + 1;
            }

            while (i < 10) // we can use like this too.
            {
                array[i++] = 1;
            }

            while (i < 10)
            {
                array[++i] = 1; // In this way array[0] is not assigned because array's increment firstly than assign value.
            }

            for (int i = 0; i < 10; i++)
            {
                cout << "array[" << i << "] : " << array[i] << endl;
            }
        }

        int func(int i)
        {
            return i;
        }

___  

# Lesson 27 - C++ Array - 4

- C -> integer addresss of address of address
- SIZE1 -> integer addresss of address
- SIZE2 -> integer addresss
- SIZE3 -> integer
___
        // Lesson 27 - Array - 4
        #include <iostream>
        using namespace std;

        #define SIZE1 1
        #define SIZE2 2
        #define SIZE3 3

        int main()
        {
            // int a[2][2];

            int b[2] = {3, 4};                      // b-> address
            int a[SIZE1][SIZE2] = {{1, 2}, {3, 4}}; // a[] -> address, a -> address of address

            for (int i = 0; i < SIZE1; i++)
            {
                for (int j = 0; i < SIZE2; i++)
                {
                    cout << "a[" << i << "][" << j << "] : " << a[i][j] << endl;
                }
            }

            int c[SIZE1][SIZE2][SIZE3];

            int counter = 0;
            for (int i = 0; i < SIZE1; i++)
            {
                for (int j = 0; j < SIZE2; j++)
                {
                    for (int k = 0; k < SIZE3; k++)
                    {
                        counter += 1;
                        c[i][j][k] = counter;
                        cout << "a[" << i << "][" << j << "][" << k << "] : " << c[i][j][k] << endl;
                    }
                }
            }
            return 0;
        }
___