Indirection
Pointers can have pointer to pointer offering more than one level of indirection.

#include <iostream>  
using namespace std;  
int main()  
{  
 int *p;  
 int a=8;  
 int **q;  
 p=&a;  
 q=&p;  
std::cout << "The value of q is : " <<*q<< std::endl;  
return 0;  
}  
In the above code, the pointer 'p' is pointing to variable 'a' while 'q' is a double pointer which is pointing to 'p'. Therefore, we can say that the value of 'p' would be the address of 'a' variable and the value of 'q' variable would be the address of 'p' variable.

Output:

The value of q is : 0x7ffd104891dc 




In the case of References, reference to reference is not possible. If we try to do c++ program will throw a compile-time error

// Let's understand this scenario through an example.

#include <iostream>  
using namespace std;  
int main()  
{  
  int a=8; // variable initialization  
 int &p=a; // creating a reference variable for ?a? variable.  
 int &&q=p;  // reference to reference is not valid, it throws an error.  
 return 0;  
} 




Output:

main.cpp: In function 'int main()':
main.cpp:18:10: error: cannot bind 'int' lvalue to 'int&&'
int &&q=p;