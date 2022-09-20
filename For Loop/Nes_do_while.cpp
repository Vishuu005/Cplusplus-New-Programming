// # C++ Nested do-while Loop
// In C++, if you use do-while loop inside another do-while loop, it is known as nested do-while loop. 
// The nested do-while loop is executed fully for each outer do-while loop.

// Let's see a simple example of nested do-while loop in C++.
*****************************************************************************************************************




#include <iostream>  
using namespace std;  
int main() {  
     int i = 1;    
         do{    
              int j = 1;          
              do{    
                cout<<i<<"\n";        
                  j++;    
              } while (j <= 3) ;    
              i++;    
          } while (i <= 3) ;     
}  



*************************************************************************************************************************
Output:
*************************************************************************************************************************

1 1
1 2
1 3
2 1
2 2 
2 3
3 1
3 2
3 3