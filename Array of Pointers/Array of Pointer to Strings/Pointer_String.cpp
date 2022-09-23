// # Array of Pointer to Strings
// An array of pointer to strings is an array of character pointers that holds the address 
// of the first character of a string or we can say the base address of a string.

// The following are the differences between an array of pointers to string and two-dimensional 
// array of characters:




// *****************************************************************************************
// An array of pointers to string is more efficient than the two-dimensional array of 
// characters in case of memory consumption because an array of pointer to strings consumes 
// less memory than the two-dimensional array of characters to store the strings.
// In an array of pointers, the manipulation of strings is comparatively easier than in the 
// case of 2d array. We can also easily change the position of the strings by using the pointers.
// Let's see how to declare the array of pointers to string.




// ********************************************************************************************
// First, we declare the array of pointer to string:

// char *names[5] = {"john",  
//                   "Peter",  
//                   "Marco",  
//                   "Devin",  
//                   "Ronan"};  
// In the above code, we declared an array of pointer names as 'names' of size 5. 
// In the above case, we have done the initialization at the time of declaration, 
// so we do not need to mention the size of the array of a pointer. The above code
//  can be re-written as:

// char *names[ ] = {"john",  
//                   "Peter",  
//                   "Marco",  
//                   "Devin",  
//                   "Ronan"};  
// In the above case, each element of the 'names' array is a string literal, 
// and each string literal would hold the base address of the first character of a string. 
// For example, names[0] contains the base address of "john", names[1] contains the base 
// address of "Peter", and so on. It is not guaranteed that all the string literals will 
// be stored in the contiguous memory location, but the characters of a string literal are 
// stored in a contiguous memory location.




// ***************************************************************************************

// Let's create a simple example.

#include <iostream>  
using namespace std;  
int main()  
{  
  char *names[5] = {"john",  
                    "Peter",  
                    "Marco",  
                    "Devin",  
                    "Ronan"};  
for(int i=0;i<5;i++)  
    {  
        std::cout << names[i] << std::endl;  
    }  
    return 0;  
}  




// ****************************************************************************************
// In the above code, we have declared an array of char pointer holding 5 string literals,
//  and the first character of each string is holding the base address of the string.




// **********************************************************************************************
Output
AD

C++ Array of Pointers