# Special Assignment Expressions
Special assignment expressions are the expressions which can be further 
classified depending upon the value assigned to the variable.

Chained Assignment
Chained assignment expression is an expression in which the same value is assigned 
to more than one variable by using single statement.

For example:

1.a=b=20   
 or   
2.(a=b) = 20  
========================================================================================================================
#include <iostream>  
using namespace std;  
int main()  
  
 int a;   // variable declaration  
 int b;   // variable declaration  
 a=b=80;  // chained assignment  
 std::cout <<"Values of 'a' and 'b' are : " <<a<<","<<b<< std::endl;  
 return 0;  
}  