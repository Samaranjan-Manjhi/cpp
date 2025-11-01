#include <iostream>
#include <stdio.h>
#include <array>

using namespace std;

void printData(int* ar, int size)
{
     for(int i=0;i<size;i++)
     {
          cout << ar[i] << " ";
     }
     cout << endl;
}

int main(int argc, char* argv)
{
     int n;
     cout << "Enter the Size of the array: ";
     cin >> n;
     int arr[n];
     cout << "Enter the array elements: ";
     for(int i=0;i<n;i++)
     {
          cin >> arr[i];
     }
     printData(arr, n);

     return 0;
}
