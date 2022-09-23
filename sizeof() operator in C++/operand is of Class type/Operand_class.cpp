#include <iostream>  
using namespace std;  
class Base  
{  
int a;  
};  
int main()  
{  
Base b;  
std::cout << "Size of class base is : "<<sizeof(b) << std::endl;  
return 0;  
} 





In the above program, we have evaluated the size of the class, which is having a single integer variable. The output would be 4 bytes as int variable occupies 4 bytes.

Output

sizeof() operator in C++


// *************************************************************************************************
// Next Code


If we add one more integer variable in a class, then the code would look like:

#include <iostream>  
using namespace std;  
class Base  
{  
    int a;  
    int d;  
};  
int main()  
{  
  Base b;  
  std::cout << "Size of class base is : "<<sizeof(b) << std::endl;  
  return 0;  
}  





In the above code, we have added one more integer variable. In this case, the size of the class would be 8 bytes as int variable occupies 4 bytes, so two integer variables occupy 8 bytes.

Output

sizeof() operator in C++



// **********************************************************************************************
// Next Code
If we add a char variable in the above code, then the code would look like:



#include <iostream>  
  
using namespace std;  
  
class Base  
{  
    int a;  
    int d;  
    char ch;  
};  
int main()  
{  
  Base b;  
  std::cout << "Size of class base is : "<<sizeof(b) << std::endl;  
    return 0;  
} 




In the above code, the class has two integer variables, and one char variable. According to our calculation, the size of the class would be equal to 9 bytes (int+int+char), but this is wrong due to the concept of structure padding.

Output

sizeof() operator in C++