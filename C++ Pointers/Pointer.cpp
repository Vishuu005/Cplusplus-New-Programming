// Let's see the simple example of using pointers printing the address and value.




****************************************************************

#include <iostream>  
using namespace std;  
int main()  
{  
int number=30;    
int ∗   p;      
p=&number;//stores the address of number variable    
cout<<"Address of number variable is:"<<&number<<endl;    
cout<<"Address of p variable is:"<<p<<endl;    
cout<<"Value of p variable is:"<<*p<<endl;    
   return 0;  
} 



***************************************************************
Output:

Address of number variable is:0x7ffccc8724c4
Address of p variable is:0x7ffccc8724c4
Value of p variable is:30  
