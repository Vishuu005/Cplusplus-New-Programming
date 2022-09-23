// # When an operand is of pointer type.




// ******************************************************************************
#include <iostream>  
using namespace std;  
int main()  
{  
    int *ptr1=new int(10);  
    std::cout << "size of ptr1 : " <<sizeof(ptr1)<< std::endl;                                                                                                                                                                                                                                  
   std::cout << "size of *ptr1 : " <<sizeof(*ptr1)<< std::endl;  
   char *ptr2=new char('a');  
   std::cout <<"size of ptr2 : " <<sizeof(ptr2)<< std::endl;  
   std::cout <<"size of *ptr2 : "<<sizeof(*ptr2)<< std::endl;  
   double *ptr3=new double(12.78);  
    std::cout <<"size of ptr3 : " <<sizeof(ptr3)<< std::endl;  
   std::cout <<"size of *ptr3 : "<<sizeof(*ptr3)<< std::endl;  
    return 0;  
}  



// *******************************************************************************************
In the above program, we have determined the size of pointers. The size of pointers would remain same for all the data types. If the computer has 32bit operating system, then the size of the pointer would be 4 bytes. If the computer has 64-bit operating system, then the size of the pointer would be 8 bytes. I am running this program on 64-bit, so the output would be 8 bytes. Now, if we provide the '*' symbol to the pointer, then the output depends on the data type, for example, *ptr1 is of integer type means the sizeof() operator will return 4 bytes as int data type occupies 4 bytes.

Output

sizeof() operator in C++