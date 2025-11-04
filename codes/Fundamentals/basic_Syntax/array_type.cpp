#include <iostream>  
using namespace std;  
int main()   
{  
     // 1. One-Dimensional Array  
     int a[5] = {10, 20, 30, 40, 50};  
     cout << "One-Dimensional Array:" << endl;  
     for (int q = 0; q < 5; q++)   
     {  
          cout << a[q] << " ";  
     }  
     cout << "\n\n";  
     // 2. Two-Dimensional Array (2x3 Matrix)  
     int b[2][3] = {  
          {21, 42, 35},  
          {54, 87, 64}  
     };  
     cout << "Two-Dimensional Array (Matrix):" << endl;  
     for (int q = 0; q < 2; q++)   
     {  
          for (int k = 0; k < 3; k++)  
          {  
               cout << b[q][k] << " ";  
          }  
          cout << endl;  
     }  
     cout << "\n";  
     // 3. Dynamic Array (Size taken from the user)  
     int size;  
     cout << "Enter the size of the dynamic array: ";  
     cin >> size;  
     // Allocating memory dynamically  
     int* c = new int[size];  
     // Initializing dynamic array  
     for (int q = 0; q < size; q++)  
     {  
          c[q] = (q + 1) * 10;  
     }  
     cout << "Dynamic Array:" << endl;  
     for (int q = 0; q < size; q++)   
     {  
          cout << c[q] << " ";  
     }  
     cout << "\n";  
     // Freeing dynamically allocated memory  
     delete[] c;  
     return 0;  
}  
