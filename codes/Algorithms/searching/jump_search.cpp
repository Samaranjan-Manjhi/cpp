#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int JumpSearch(int arr[], int size, int key, int& val, int& pos)
{
     int i, j, m, k;
     i = 0;
     m = sqrt(size);
     k = m;
     while(arr[m] <= key && m < size) 
     {
          i = m;
          m += k;
          if(m > size - 1)
          {
               return -1;
          }
     }
     
     for(j = i; j<m; j++) 
     {
          if(arr[j] == key)
          {
               val = key;
               pos = j;
               break;
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
     sort(arr, arr+n);
     cout << "Elements of array after sorting: ";
     for(int i=0; i<n; i++)
     {
          cout << arr[i] << " ";
     }
     cout << endl;
     cout << "Enter the element to found in array: ";
     cin >> s;
     int num, ind;
     int res = JumpSearch(arr, n, s, num, ind);
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
