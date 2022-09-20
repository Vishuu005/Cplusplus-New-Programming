// # C++ Do-While Loop
// The C++ do-while loop is used to iterate a part of the program several times. 
// If the number of iteration is not fixed and you must have to execute the loop at least once, 
// it is recommended to use do-while loop.

// The C++ do-while loop is executed at least once because condition is checked after loop body.

do{    
//code to be executed    
}while(condition);




********************************************************************************************************


// # C++ do-while Loop Example
// Let's see a simple example of C++ do-while loop to print the table of 1.

********************************************WELCOME VISHAL PANDEY PAGE******************************************************

#include <iostream>  
using namespace std;  
int main() {  
     int i = 1;    
          do{    
              cout<<i<<"\n";    
              i++;    
          } while (i <= 10) ;    
}

*********************************************ENDING OF PAGE SEE RESULT***************************************************************

Output:

1
2
3
4
5
6
7
8
9
10