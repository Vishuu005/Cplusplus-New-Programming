// C++ Parameterized Constructor
// A constructor which has parameters is called parameterized constructor. 
// It is used to provide different values to distinct objects.

// Let's see the simple example of C++ Parameterized Constructor.

#include <iostream>
using namespace std;
class Employee {
   public:
       int id;//data member (also instance variable)    
       string name;//data member(also instance variable)
       float salary;
       Employee(int i, string n, float s)  
        {  
            id = i;  
            name = n;  
            salary = s;
        }  
       void display()  
        {  
            cout<<id<<"  "<<name<<"  "<<salary<<endl;  
        }  
};
int main(void) {
    Employee e1 =Employee(101, "Vishal", 890000); //creating an object of Employee 
    Employee e2=Employee(102, "Harsh", 59000); 
    e1.display();  
    e2.display();  
    return 0;
}