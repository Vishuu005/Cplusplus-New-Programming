// Memory Address
// In the case of reference, both the reference and actual variable refer to the same address.
//  The new variable will not be assigned to the reference variable until the actual
//   variable is either deleted or goes out of the scope.

// Let's understand this scenario through an example.

#include <iostream>  
using namespace std;  
void func(int &);  
int main()  
{  
  int i;  
  int &a=i;  
  std::cout << "The address of 'a' variable is : " <<&a<< std::endl;  
  std::cout << "The address of 'i' variable is : " <<&i<< std::endl;  
  return 0;  
} 


Output:

The address of 'a' variable is : 0x7fff078e7e44 


*****************************************************************************                                                                       The address of 'i' variable is : 0x7fff078e7e4
The above output shows that both the reference variable and the actual variable have the same a
ddress.
AD

// In the case of pointers, both the pointer variable and the actual variable will have different memory addresses. Let's understand this through an example.

#include <iostream>  
using namespace std;  
int main()  
{  
    int k;  
    int *p;  
    p=&k;  
    cout<<"The memory address of p variable is :"<<&p;  
    cout<<"\nThe memory address of k variable is :"<<&k;  
    return 0;  
}  


**************************************************************************************


Output:

The memory address of p variable is :0x7ffcc5c164b8                           