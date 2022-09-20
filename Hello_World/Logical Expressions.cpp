// # Logical Expressions
// A logical expression is an expression that combines two or more relational expressions 
// and produces a bool type value. The logical operators are '&&' and '||' that combines two 
// or more relational expressions.

// # The following are some examples of logical expressions:

// 1.a>b && x>y  
// 2.a>10 || b==5  



****************************************************************************************************************
// Let's see a simple example of logical expression.


#include <iostream>  
using namespace std;  
int main()  
{  
 int a=2;  
 int b=7;  
 int c=4;  
cout<<((a>b)||(a>c));  
return 0;  
}  

