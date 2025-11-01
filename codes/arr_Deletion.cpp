#include <iostream>
#include <stdio.h>
#include <array>

using namespace std;

int main(int argc, char* argv)
{
     int n;
     cout << "Enter the size of the array: ";
     cin >> n;
     int del;
     cout << "Enter the elements to delete from the array: ";
     cin >> del;
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

     for(int i=0;i<n;i++)
     {
          if(arr[i] == del)
          {
               arr[i] = arr[i+1];
               n = n-1;
          }
     }

     cout << "Array elements after deletion are : ";
     for(int i=0; i<n; i++)
     {
          cout << arr[i] << " ";
     }
     cout << endl;

     return 0;
}


