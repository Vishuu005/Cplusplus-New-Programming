// # Properties of References
// The following are the properties of references:

// Initializátion

// It must be initialized at the time of the declaration.


*****************************************************************************************

#include <iostream>  
using namespace std;  
int main()  
{  
int a=10; // variable initialization  
int &b=a; // b reference to a  
std::cout << "value of a is " <<b<< std::endl;  
return 0;  
} 


*********************************************************************************************

In the above code, we have created a reference variable, i.e., 'b'. 

At the time of declaration, 'a' variable is assigned to 'b'. If we do not assign 
at the time of declaration, then the code would look like:


************************************************************************************************

int &b;  
&b=a;    
The above code will throw a compile-time error as 'a'
 is not assigned at the time of declaration.

Output

 value of a is 10 



 *********************************************************************************************
Reassignment

It cannot be reassigned means that the reference variable cannot be modified.

#include <iostream>  
using namespace std;  
int main()  
{  
int x=11; // variable initialization  
int z=67;  
int &y=x; // y reference to x  
int &y=z; // y reference to z, but throws a compile-time error.  
return 0;
}  





In the above code, 'y' reference variable is referring to 'x' variable, and then 'z' is assigned to 'y'. But this reassignment is not possible with the reference variable, so it throws a compile-time error.
AD




*******************************************************************************
Compile-time error

main.cpp: In function 'int main()':  
main.cpp:18:9: error: redeclaration of 'int& y'  
int &y=z; // y reference to z, but throws a compile-time error.  
^  
main.cpp:17:9: note: 'int& y' previously declared here  
int &y=x; // y reference to x  
^  