#include <iostream>
#include <stdio.h>
#include <array>

using namespace std;

void printData(int** arr, int rows, int cols)
{
     for (int i = 0; i < rows; i++) 
     {
          for (int j = 0; j < cols; j++) 
          {
               cout << arr[i][j] << " ";
          }
          cout << endl;
     }
}

int main()
{
     int rows, cols;
     cout << "Enter number of rows: ";
     cin >> rows;
     cout << "Enter number of columns: ";
     cin >> cols;

     int** arr = new int*[rows];  
     for (int i = 0; i < rows; i++) 
     {
          arr[i] = new int[cols]; 
     }

     cout << "Enter the elements of the array: " << endl;
     for (int i = 0; i < rows; i++) 
     {
          for (int j = 0; j < cols; j++) 
          {
               cin >> arr[i][j];
          }
     }

     printData(arr, rows, cols);
     for (int i = 0; i < rows; i++) 
     {
          delete[] arr[i]; 
     }
     delete[] arr; 

     return 0;
}

