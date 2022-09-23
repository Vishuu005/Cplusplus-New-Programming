// # When an operand is an expression.



// ********************************************************************************



#include <iostream>  
using namespace std;  
   
int main()  
{  
   int num1;  
   double num2;  
   cout << sizeof(num1+num2);  
     return 0;  
}  



// *************************************************************************************
// In the above program, we have declared two variables num1 and num2 of type int and double, 
// respectively. The size of the int is 4 bytes, while the size of double is 8 bytes. 
// The result would be the variable, which is of double type occupying 8 bytes.

// **************************************************************************************************

Output

sizeof() operator in C++
