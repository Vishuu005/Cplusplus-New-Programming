// Let's understand this scenario through an example.






#include <iostream>  
using namespace std;  
int main()  
{  
  // Determining the space in bytes occupied by each data type.  
  std::cout << "Size of integer data type : " <<sizeof(int)<< std::endl;  
  std::cout << "Size of float data type : " <<sizeof(float)<< std::endl;  
  std::cout << "Size of double data type : " <<sizeof(double)<< std::endl;  
  std::cout << "Size of char data type : " <<sizeof(char)<< std::endl;  
  return 0;  
}





In the above program, we have evaluated the size of the in-built data types by using the sizeof() operator. As we know that int occupies 4 bytes, float occupies 4 bytes, double occupies 8 bytes, and char occupies 1 byte, and the same result is shown by the sizeof() operator as we can observe in the following output.

Output

sizeof() operator in C++