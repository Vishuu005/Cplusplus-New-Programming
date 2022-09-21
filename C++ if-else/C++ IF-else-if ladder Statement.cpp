// # C++ IF-else-if ladder Statement
// # The C++ if-else-if ladder statement executes one condition from multiple statements.

// if(condition1){    
// //code to be executed if condition1 is true    
// }else if(condition2){    
// //code to be executed if condition2 is true    
// }    
// else if(condition3){    
// //code to be executed if condition3 is true    
// }    
// ...    
// else{    
// //code to be executed if all the conditions are false    
// }    

****************************************************************************************************************

#include <iostream>  
using namespace std;  
int main () {  
       int num;  
       cout<<"Enter a number to check grade:";    
       cin>>num;  
            if (num <0 || num >100)    
            {    
                cout<<"wrong number";    
            }    
            else if(num >= 0 && num < 50){    
                cout<<"Fail";    
            }    
            else if (num >= 50 && num < 60)    
            {    
                cout<<"D Grade";    
            }    
            else if (num >= 60 && num < 70)    
            {    
                cout<<"C Grade";    
            }    
            else if (num >= 70 && num < 80)    
            {    
                cout<<"B Grade";    
            }    
            else if (num >= 80 && num < 90)    
            {    
                cout<<"A Grade";    
            }    
            else if (num >= 90 && num <= 100)    
            {    
                cout<<"A+ Grade";  
            }    
    }    