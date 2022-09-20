// # Bitwise Expressions
// A bitwise expression is an expression which is used to manipulate the data at a bit level. They are basically used to shift the bits.

// For example:

// x=3

// x>>3 // This statement means that we are shifting the three-bit position to the right.

// In the above example, the value of 'x' is 3 and its binary value is 0011. 
// We are shifting the value of 'x' by three-bit position to the right. 
// Let's understand through the diagrammatic representation.

*******************************************************************************************************************
#include <iostream>  
using namespace std;  
int main()  
{  
 int x=5;   // variable declaration  
std::cout << (x>>1) << std::endl;  
return 0;  
} 
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include <iostream>  
using namespace std;  
int main()  
{  
 int x=7;   // variable declaration  
std::cout << (x<<3) << std::endl;  
return 0;  
}  

