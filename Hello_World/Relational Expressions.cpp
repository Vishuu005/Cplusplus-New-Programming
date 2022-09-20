// # Relational Expressions

// A relational expression is an expression that produces a value of type bool,
// which can be either true or false. It is also known as a boolean expression.
// When arithmetic expressions are used on both sides of the relational operator,
// arithmetic expressions are evaluated first, and then their results are compared.

The following are the examples of the relational expression :

    1.a > b 2.a - b >= x - y 3.a + b > 80

                                           / *************************Design My Code Of Relational Expression By Vishal Pandey ********************************

#Let's understand through an example

#include <iostream>
                                                                     using namespace std;
int main()
{
    int a = 45;                     // variable declaration
    int b = 78;                     // variable declaration
    bool y = a > b;                 // relational expression
    cout << "Value of y is :" << y; // displaying the value of y.
    return 0;
}

*******************************************************************************************************************************************************************************

#include <iostream>
                                                                                                                                                                              using namespace std;
int main()
{
    int a = 4;                    // variable declaration
    int b = 5;                    // variable declaration
    int x = 3;                    // variable declaration
    int y = 6;                    // variable declaration
    cout << ((a + b) >= (x + y)); // relational expression
    return 0;
}