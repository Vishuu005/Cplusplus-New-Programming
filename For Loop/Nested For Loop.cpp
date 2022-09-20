// # C++ Nested For Loop
// In C++, we can use for loop inside another for loop, it is known as nested for loop. 
// The inner loop is executed fully when outer loop is executed one time. So if outer loop 
// and inner loop are executed 4 times, inner loop will be executed 4 times for each outer loop i.e. 
// total 16 times.

// # C++ Nested For Loop Example
// Let's see a simple example of nested for loop in C++.


*************************************************************************************************

#include <iostream>  
using namespace std;  
   
int main () {  
        for(int i=1;i<=3;i++){      
             for(int j=1;j<=3;j++){      
            cout<<i<<" "<<j<<"\n";      
          }     
        }  
    } 

**************************************************************************************************   
Output:

1 1
1 2
1 3
2 1
2 2 
2 3
3 1
3 2
3 3