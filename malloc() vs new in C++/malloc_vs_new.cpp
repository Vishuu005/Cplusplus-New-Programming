What is malloc()?
A malloc() is a function that allocates memory at the runtime. 
This function returns the void pointer, which means that it can be 
assigned to any pointer type. This void pointer can be further typecast 
to get the pointer that points to the memory of a specified type.

The syntax of the malloc() function is given below:

type variable_name = (type *)malloc(sizeof(type));   
where,

type: it is the datatype of the variable for which the memory has to be allocated.

variable_name: It defines the name of the variable that points to the memory.

(type*): It is used for typecasting so that we can get the pointer of 
a specified type that points to the memory.

sizeof(): The sizeof() operator is used in the malloc() function to obtain 
the memory size required for the allocation.

Note: The malloc() function returns the void pointer, so typecasting is required 
to assign a different type to the pointer. The sizeof() operator is required in 
the malloc() function as the malloc() function returns the raw memory, so the 
sizeof() operator will tell the malloc() function how much memory is required for the allocation.
If the sufficient memory is not available, then the memory can be resized using 
realloc() function. As we know that all the dynamic memory requirements are 
fulfilled using heap memory, so malloc() function also allocates the memory in 
a heap and returns the pointer to it. The heap memory is very limited, so when
our code starts execution, it marks the memory in use, and when our code completes 
its task, then it frees the memory by using the free() function. If the sufficient
 memory is not available, and our code tries to access the memory, then the malloc() 
 function returns the NULL pointer. The memory which is allocated by the malloc()
 function can be deallocated by using the free() function.



 *********************************************************************************************



//  Let's understand through an example.

#include <iostream>  
#include<stdlib.h>  
using namespace std;  
  
int main()  
{  
     
  int len;   // variable declaration  
  std::cout << "Enter the count of numbers :" << std::endl;  
  std::cin >> len;  
  int *ptr; // pointer variable declaration  
  ptr=(int*) malloc(sizeof(int)*len);  // allocating memory to  the poiner variable  
  for(int i=0;i<len;i++)  
  {  
      std::cout << "Enter a number : " << std::endl;  
      std::cin >> *(ptr+i);  
  }  
  std::cout << "Entered elements are : " << std::endl;  
   for(int i=0;i<len;i++)  
  {  
     std::cout << *(ptr+i) << std::endl;  
  }  
free(ptr);  
    return 0;  
}  



Output:




If we do not use the free() function at the correct place, then it can lead to the cause of the dangling pointer.
//  Let's understand this scenario through an example.
AD

#include <iostream>  
#include<stdlib.h>  
using namespace std;  
int *func()  
{  
    int *p;  
    p=(int*) malloc(sizeof(int));  
    free(p);  
    return p;  
}  
int main()  
{  
     
 int *ptr;  
 ptr=func();  
 free(ptr);  
    return 0;  
}  



In the above code, we are calling the func() function. 
The func() function returns the integer pointer. Inside the func() 
function, we have declared a *p pointer, and the memory is allocated 
to this pointer variable using malloc() function. In this case, 
we are returning the pointer whose memory is already released. 
The ptr is a dangling pointer as it is pointing to the released memory location.
 Or we can say ptr is referring to that memory which is not pointed by the pointer.

Till now, we get to know about the new operator and the malloc() function. 
Now, we will see the differences between the new operator and the malloc() function.






********************************************************************************************



Differences between the malloc() and new
malloc() vs new in C++
The new operator constructs an object, i.e., it calls the constructor to initialize an object while malloc() function does not call the constructor. The new operator invokes the constructor, and the delete operator invokes the destructor to destroy the object. This is the biggest difference between the malloc() and new.
The new is an operator, while malloc() is a predefined function in the stdlib header file.
The operator new can be overloaded while the malloc() function cannot be overloaded.
If the sufficient memory is not available in a heap, then the new operator will throw an exception while the malloc() function returns a NULL pointer.
In the new operator, we need to specify the number of objects to be allocated while in malloc() function, we need to specify the number of bytes to be allocated.
In the case of a new operator, we have to use the delete operator to deallocate the memory. But in the case of malloc() function, we have to use the free() function to deallocate the memory.
Syntax of new operator

type reference_variable = new type name;  
where,

type: It defines the data type of the reference variable.

reference_variable: It is the name of the pointer variable.

new: It is an operator used for allocating the memory.

type name: It can be any basic data type.

For example,

int *p;  
p = new int;   
In the above statements, we are declaring an integer pointer variable. The statement p = new int; allocates the memory space for an integer variable.

Syntax of malloc() is given below:

int *ptr = (data_type*) malloc(sizeof(data_type));  
ptr: It is a pointer variable.

data_type: It can be any basic data type.

For example,

int *p;  
p = (int *) malloc(sizeof(int))  
The above statement will allocate the memory for an integer variable in a heap, and
 then stores the address of the reserved memory in 'p' variable.

On the other hand, the memory allocated using malloc() function can be deallocated
 using the free() function.
Once the memory is allocated using the new operator, then it cannot be resized. On the other
 hand, the memory is allocated using malloc() function; then, it can be reallocated using
  realloc() function.
The execution time of new is less than the malloc() function as new is a construct,
 and malloc is a function.
The new operator does not return the separate pointer variable; it returns the
 address of the newly created object. On the other hand, the malloc() function returns
 the void pointer which can be further typecast in a specified type.