# C++ Array Example: Traversal using foreach loop
We can also traverse the array elements using foreach loop. 
It returns array element one by one.


************************************************************************************************

#include <iostream>  
using namespace std;  
int main()  
{  
 int arr[5]={10, 0, 20, 0, 30}; //creating and initializing array    
        //traversing array    
       for (int i: arr)     
        {    
            cout<<i<<"\n";    
        }    
}  



***************************************************************************************************

Output:

10
20
30
40
50