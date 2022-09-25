// Function Parameters

// References can also be passed as a function parameter. 
// It does not create a copy of the argument and behaves as an alias 
// for a parameter. It enhances the performance as it does not create a copy of the argument.

// Let's understand through a simple example.




**********************************************************************************************

#include <iostream>  
using namespace std;  
int main()  
{  
int a=9; // variable initialization  
int b=10; // variable initialization  
swap(a, b); // function calling  
std::cout << "value of a is :" <<a<< std::endl;  
std::cout << "value of b is :" <<b<< std::endl;  
return 0;  
}  
void swap(int &p, int &q) // function definition  
{  
int temp; // variable declaration  
temp=p;  
p=q;  
q=temp;  
} 


************************************************************************************************
In the above code, we are swapping the values of 'a' and 'b'. We have passed the variables 
'a' and 'b' to the swap() function. In swap() function, 'p' is referring to 'a' and 'q' 
is referring to 'b'. When we swap the values of 'p' and 'q' means that the values of
 'a' and 'b' are also swapped.

Output

 value of a is :10 
value of b is :9 




**********************************************************************************************
References as shortcuts

With the help of references, we can easily access the nested data.

#include <iostream>  
using namespace std;  
struct profile  
{  
int id;  
};  
struct employee  
{  
profile p;  
};  
int main()  
{  
employee e;  
int &ref=e.p.id;  
ref=34;  
std::cout << e.p.id << std::endl;  
}



*********************************************************************************************************
In the above code, we are trying to access the 'id' of the profile struct of the employee. We generally access this member by using the statement e.p.id, but this would be a tedious task if we have multiple access to this member. To avoid this situation, we create a reference variable, i.e., ref, which is another name of 'e.p.id'.

Output

 34 