// # C++ Array of Pointers
// Array and pointers are closely related to each other. 
// In C++, the name of an array is considered às a pointer, i.e., 
// the name of an array contains the address of an element. C++ considers 
// the array name as the address of the first element. For example, if we create an array, i.e., 
// marks which hold the 20 values of integer type, then marks will contain the address of first element, i.e., marks[0]. 
// Therefore, we can say that array name (marks) is a pointer which is
//  holding the address of the first element of an array.


// **********************************************************************************************


// Let's understand this scenario through an example.




#include <iostream>  
using namespace std;  
int main()  
{  
    int *ptr;  // integer pointer declaration  
    int marks[10]; // marks array declaration  
    std::cout << "Enter the elements of an array :" << std::endl;  
    for(int i=0;i<10;i++)  
    {  
        cin>>marks[i];  
    }  
    ptr=marks; // both marks and ptr pointing to the same element..  
    std::cout << "The value of *ptr is :" <<*ptr<< std::endl;  
    std::cout << "The value of *marks is :" <<*marks<<std::endl;  
}  




*****************************************************************************************

In the above code, we declare an integer pointer and an array of integer type. We assign the address of marks to the ptr by using the statement ptr=marks; it means that both the variables 'marks' and 'ptr' point to the same element, i.e., marks[0]. When we try to print the values of *ptr and *marks, then it comes out to be same. Hence, it is proved that the array name stores the address of the first element of an array.

Output