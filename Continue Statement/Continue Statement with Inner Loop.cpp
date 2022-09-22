// #C++ Continue Statement with Inner Loop
// C++ Continue Statement continues inner loop only if you use continue statement 
// inside the inner loop.

***************************************************************************************************


#include <iostream>  
using namespace std;  
int main()  
{  
 for(int i=1;i<=3;i++){        
            for(int j=1;j<=3;j++){        
             if(i==2&&j==2){        
                continue;        
                        }        
                cout<<i<<" "<<j<<"\n";                  
                    }        
            }            
}  


*****************************************************************************************************************


Output:
******************************************************************************************************************
1 1
1 2
1 3
2 1
2 3
3 1
3 2
3 3