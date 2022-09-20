// # Pointer Expressions
// A pointer expression is an expression that produces address value as an output.

// The following are the examples of pointer expression:

// 1.&x
// 2.ptr
// 3.ptr++
// 4.ptr-

***************************************************************************************************************

// *************************Design My Code Of Pointer Expression By Vishal Pandey********************************

# Let's understand through an example.


#include <iostream>
                                                                                                              using namespace std;
int main()
{

    int a[] = {1, 2, 3, 4, 5}; // array initialization
    int *ptr;                  // pointer declaration
    ptr = a;                   // assigning base address of array to the pointer ptr
    ptr = ptr + 1;             // incrementing the value of pointer
    std::cout << "value of second element of an array : " << *ptr << std::endl;
    return 0;
}