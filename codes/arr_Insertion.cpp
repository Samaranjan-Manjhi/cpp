#include <iostream>
#include <stdio.h>
#include <array>

using namespace std;

int main(int argc, char* argv)
{
     int n;
     cout << "Enter the size of the array: ";
     cin >> n;

     int arr[n];
     cout << "Array elements before insertion are : ";
     for(int i=0; i<n; i++)
     {
          cout << arr[i] << " ";
     }
     cout << endl;

     cout << "Enter the array elements: ";
     for(int i=0; i<n; i++)
     {
          cin >> arr[i];
     }
     cout << endl;

     cout << "Array elements after insertion are : ";
     for(int i=0; i<n; i++)
     {
          cout << arr[i] << " ";
     }
     cout << endl;

     return 0;
}
