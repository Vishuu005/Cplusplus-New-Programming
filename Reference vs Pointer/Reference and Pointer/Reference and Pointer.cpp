// Let's understand through a simple example.

#include <iostream>  
using namespace std;  
void func(int &);  
int main()  
{  
   int a=10;  
   std::cout <<"Value of 'a' is :" <<a<< std::endl;  
  func(a);   
  std::cout << "Now value of 'a' is :" <<a<< std::endl;  
  return 0;  
}  
void func(int &m)  
{  
   m=8;  
}


Output:

Value of 'a' is :10                                                                                                             
Now value of 'a' is :8 

**********************************************************************************************
Whereas, Pointer is a variable that stores the address of another variable. 
It makes the programming easier as it holds the memory address of some variable.