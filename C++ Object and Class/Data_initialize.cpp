// C++ Class Example: Initialize and Display data through method
// Let's see another example of C++ class where we are initializing and 
// displaying object through method.






#include <iostream>  
using namespace std;  
class Student {  
   public:  
       int id;//data member (also instance variable)      
       string name;//data member(also instance variable)      
       void insert(int i, string n)    
        {    
            id = i;    
            name = n;    
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<endl;    
        }    
};  
int main(void) {  
    Student s1; //creating an object of Student   
    Student s2; //creating an object of Student  
    s1.insert(201, "Vishal");    
    s2.insert(202, "Vivek");    
    s1.display();    
    s2.display();  
    return 0;  
}  




Output: