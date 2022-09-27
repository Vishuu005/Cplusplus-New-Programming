# Arithmetic Operations
As we know that arithmetic operations can be applied to the pointers named as
 "Pointer Arithmetic", but arithmetic operations cannot be applied on the references. 
 There is no word, i.e., Reference Arithmetic exists in C++.

// Let's see a simple example of Pointers.

*****************************************************************************

#include <iostream>  
using namespace std;  
int main()  
{  
 int a[]={1,2,3,4,5}; // array initialization  
  int *ptr;  // pointer declaration  
  ptr=a; assigning base address to pointer ptr.  
  cout<<"The value of *ptr is :"<<*ptr;  
  ptr=ptr+1;  // incrementing the value of ptr by 1.  
  std::cout << "\nThe value of *ptr is: " <<*ptr<< std::endl;  
  return 0;  
}  


***************************************************************************************88
Output:

The value of *ptr is :1                                                                                                       
The value of *ptr is: 2


****************************************************************************************

// Let's understand the references through an example.



#include <iostream>  
using namespace std;  
int main()  
{  
   
 int value=90;  // variable declaration  
 int &a=value;   // assigning value to the reference  
 &a=&a+5 // arithmetic operation is not possible with reference variable, it throws an error.  
 return 0;  
}  