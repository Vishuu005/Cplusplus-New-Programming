// C++ Default Constructor
// A constructor which has no argument is known as default constructor. 
// It is invoked at the time of creating object.



// Let's see the simple example of C++ default Constructor.

#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Default Constructor Invoked"<<endl;    
        }    
};  
int main(void)   
{  
    Employee e1; //creating an object of Employee   
    Employee e2;   
    return 0;  
}  


Output: