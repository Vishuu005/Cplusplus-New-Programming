// C++ Object and Class Example
// Let's see an example of class that has two fields: id and name. It creates instance of the class, initializes the object and prints the object value.

#include <iostream>  
using namespace std;  
class Student {  
   public:  
      int id;//data member (also instance variable)      
      string name;//data member(also instance variable)      
};  
int main() {  
    Student s1; //creating an object of Student   
    s1.id = 201;    
    s1.name = "Vishal Pandey";   
    cout<<s1.id<<endl;  
    cout<<s1.name<<endl;  
    return 0;  
}  

Output: