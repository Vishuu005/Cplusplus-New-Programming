// Let's look at a simple example.

#include <iostream>  
using namespace std;  
int main()  
{  
int a=70; // variable initialization  
int &b=a;  
int &c=a;  
std::cout << "Value of a is :" <<a<< std::endl;  
std::cout << "Value of b is :" <<b<< std::endl;  
std::cout << "Value of c is :" <<c<< std::endl;  
return 0;
}  




**********************************************************************************************

In the above code, we create a variable 'a' which contains a value '70'. 
We have declared two reference variables, i.e., b and c, and both are referring 
to the same variable 'a'. Therefore, we can say that 'a' variable can be accessed
 by 'b' and 'c' variable.

Output

 Value of a is :70 
Value of b is :70 
Value of c is :70 