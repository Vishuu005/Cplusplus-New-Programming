// # C++ IF-else Statement
// The C++ if-else statement also tests the condition. It executes if block if condition is true otherwise else block is executed.

// if(condition){    
// //code if condition is true    
// }else{    
// //code if condition is false    
// }    

*********************************************************************************************************

#include <iostream>  
using namespace std;  
int main () {  
   int num = 11;    
            if (num % 2 == 0)    
            {    
                cout<<"It is even number";    
            }   
            else  
            {    
                cout<<"It is odd number";    
            }  
   return 0;  
}  

*************************************************************************************************************
C++ If-else Example: with input from user

#include <iostream>  
using namespace std;  
int main () {  
    int num;  
    cout<<"Enter a Number: ";  
    cin>>num;  
            if (num % 2 == 0)    
            {    
                cout<<"It is even number"<<endl;    
            }   
            else  
            {    
                cout<<"It is odd number"<<endl;    
            }  
   return 0;  
}  
