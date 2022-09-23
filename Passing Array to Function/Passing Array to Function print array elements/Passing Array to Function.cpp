// # C++ Passing Array to Function Example: print array elements
// Let's see an example of C++ function which prints the array elements.


************************************************************************************************

#include <iostream>  
using namespace std;  
void printArray(int arr[5]);  
int main()  
{  
        int arr1[5] = { 10, 20, 30, 40, 50 };    
        int arr2[5] = { 5, 15, 25, 35, 45 };    
        printArray(arr1); //passing array to function    
        printArray(arr2);  
}  
void printArray(int arr[5])  
{  
    cout << "Printing array elements:"<< endl;  
    for (int i = 0; i < 5; i++)  
    {  
                   cout<<arr[i]<<"\n";    
    }  
}  





*****************************************************************************************************
Output:

Printing array elements:                                                              
10                                                                                    
20                                                                                    
30                                                                                    
40                                                                                    
50                                                                                    
Printing array elements:                                                              
5                                                                                     
15                                                                                    
25                                                                                    
35                                                                                    
45