#include <iostream>
#include <stdio.h>

using namespace std;

int LinearSearch(int arr[], int size, int m, int& val, int& pos)
{
     for(int i=0; i<size; i++)
     {
          if(arr[i] == m)
          {
               val = m;
               pos = i;
               break;
          }     
          else
          {
               continue;
          }
     }
     return 3;
}


int main(int argc, char* argv[])
{
     int n, s;
     cout << "Enter the size of Array: ";
     cin >>n;

     int arr[n];
     for(int i=0; i<n; i++)
     {
          cin >> arr[i];
     }
     cout << endl;
     cout << "Elements of array: ";
     for(int i=0; i<n; i++)
     {
          cout << arr[i] << " ";
     }
     cout << endl;
     cout << "Enter the element to found in array: ";
     cin >> s;
     int num, ind;
     int res = LinearSearch(arr, n, s, num, ind);
     if(res == 3)
     {
          printf("Search Element %d found in the array at index: %d\n", num, ind);
     }
     else
     {
          cout << "Element not found in the array.\n";
     }

     return 0;
}
