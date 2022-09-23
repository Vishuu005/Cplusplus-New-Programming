// C++ Multidimensional Arrays
// The multidimensional array is also known as rectangular arrays in C++. It can be two dimensional or three dimensional. The data is stored in tabular form (row ∗ column) which is also known as matrix.

// # C++ Multidimensional Array Example
// Let's see a simple example of multidimensional array in C++ which declares, 
// initializes and traverse two dimensional arrays.





************************************************************************************************

#include <iostream>  
using namespace std;  
int main()  
{  
  int test[3][3];  //declaration of 2D array   
    test[0][0]=5;  //initialization   
    test[0][1]=10;   
    test[1][1]=15;  
    test[1][2]=20;  
    test[2][0]=30;  
    test[2][2]=10;  
    //traversal    
    for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout<< test[i][j]<<" ";  
        }  
        cout<<"\n"; //new line at each row   
    }  
    return 0;  
}  





********************************************************************************************
Output:

5 10 0 
0 15 20 
30 0 10 