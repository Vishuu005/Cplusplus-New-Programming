// # C++ Break Statement
// The C++ break is used to break loop or switch statement. 
// It breaks the current flow of the program at the given condition. In case of inner loop, 
// it breaks only inner loop.

// jump-statement;      
// break;  

**********************************************************************************************************

// #C++ Break Statement Example
// Let's see a simple example of C++ break statement which is used inside the loop.


***************************************************************************************************

#include <iostream>  
using namespace std;  
int main() {  
      for (int i = 1; i <= 10; i++)    
          {    
              if (i == 5)    
              {    
                  break;    
              }    
        cout<<i<<"\n";    
          }    
}  


********************************************************************************************************

Output:
************************************************************************************************
1
2
3
4
