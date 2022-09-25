// # C++ Void Pointer
// A void pointer is a general-purpose pointer that can hold the address of any data type, 
// but it is not associated with any data type.

// Syntax of void pointer
// void *ptr;  
// In C++, we cannot assign the address of a 
// variable to the variable of a different data type. 
// Consider the following example:

// int *ptr;  // integer pointer declaration  
// float a=10.2; // floating variable initialization  
// ptr= &a;  // This statement throws an error.  
// In the above example, we declare a pointer of type integer, i.e., 
// ptr and a float variable, i.e., 'a'. After declaration, we try to 
// store the address of 'a' variable in 'ptr', but this 
// is not possible in C++ as the variable 
// cannot hold the address of different data types.



// ************************************************************************************************



// Let's understand through a simple example.

#include <iostream.h>  
using namespace std;  
int main()  
{  
    int *ptr;  
    float f=10.3;  
    ptr = &f; // error  
    std::cout << "The value of *ptr is : " <<*ptr<< std::endl;  
    return 0;  
}  



// In the above program, we declare a pointer of integer type and variable of float type.
//  An integer pointer variable cannot point to the float variable, 
//  but it can point to an only integer variable.

Output



// ****************************************************************************************************



// C++ has overcome the above problem by using the C++ void pointer as a 
// void pointer can hold the address of any data type.

// Let's look at a simple example of void pointer.




#include <iostream>  
using namespace std;  
int main()  
{  
  void *ptr;   // void pointer declaration  
  int a=9;   // integer variable initialization  
  ptr=&a;   // storing the address of 'a' variable in a void pointer variable.  
  std::cout << &a << std::endl;  
  std::cout << ptr << std::endl;  
  return 0;  
}  





// In the above program, we declare a void pointer variable and an integer variable 
// where the void pointer contains the address of an integer variable.

Output

C++ Void Pointer


// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

// Next Code



// Difference between void pointer in C and C++
// In C, we can assign the void pointer to any other pointer type without any typecasting, 
// whereas in C++, we need to typecast 
// when we assign the void pointer type to any other pointer type.

// Let's understand through a simple example.

In C,

#include <stdio.h>  
int main()  
{  
   void *ptr; // void pointer declaration  
   int *ptr1;  // integer pointer declaration  
   int a =90;  // integer variable initialization  
   ptr=&a; // storing the address of 'a' in ptr  
   ptr1=ptr; // assigning void pointer to integer pointer type.  
   printf("The value of *ptr1 : %d",*ptr1);  
   return 0;  
 }  



// In the above program, we declare two pointers 'ptr' and 'ptr1' of type void and integer, 
// respectively. We also declare the integer type variable, i.e.,
//  'a'. After declaration, we assign the address of 'a' variable to 
//  the pointer 'ptr'. Then, we assign the void pointer to the integer 
//  pointer, i.e., ptr1 without any typecasting because in C, 
//  we do not need to typecast while assigning the void pointer to any other type of pointer.

Output

C++ Void Pointer
In C++,




#include <iostream>  
using namespace std;  
int main()  
{  
  void *ptr; // void pointer declaration  
  int *ptr1; // integer pointer declaration  
  int data=10; // integer variable initialization  
  ptr=&data;  // storing the address of data variable in void pointer variable  
  ptr1=(int *)ptr; // assigning void pointer to integer pointer  
  std::cout << "The value of *ptr1 is : " <<*ptr1<< std::endl;  
  return 0;  
}  






// In the above program, we declare two pointer variables of type 
// void and int type respectively. We also create another integer 
// type variable, i.e., 'data'. After declaration, we store the 
// address of variable 'data' in a void pointer variable, i.e.,
//  ptr. Now, we want to assign the void pointer to integer 
//  pointer, in order to do this, we need to apply the cast 
//  operator, i.e., (int *) to the void pointer variable. 
//  This cast operator tells the compiler which type of value
//   void pointer is holding. For casting, we have to type the 
//   data type and * in a bracket like (char *) or (int *).

Output

C++ Void Pointer
