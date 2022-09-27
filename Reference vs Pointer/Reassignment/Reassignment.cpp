// Reassignment
// We cannot reassign the reference variable. Now, we take a simple example as given below:



#include <iostream>  
using namespace std;  
void func(int &);  
int main()  
{  
  int i;    // variable declaration  
  int k;    // variable declaration  
  int &a=i;  
  int &a=k; // error  
  return 0;  
}  

****************************************************************************************

// The above code shows the error that multiple declarations of int &a are not allowed. 
// Therefore, the above program concludes that reassignment operation is not valid for

//  the reference variable.

// Whereas, the pointers can be re-assigned. This reassignment is useful when we are working 
// with the data structures such as linked list, trees, etc.