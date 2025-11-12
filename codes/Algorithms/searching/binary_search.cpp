#include <iostream>
#include <algorithm>

using namespace std;

int BinarySearch(int arr[], int size, int m, int& val, int& pos)
{
     int l = 0;
     int h = size-1;
     int mid;
     while(l<=h)
     {
          mid = l + (h-l)/2;
          if(arr[mid] == m)
          {
               val = m;
               pos = mid;
               break;
          }
          else if(arr[mid] > m)
          {
               h = mid-1;
          }
          else if(arr[mid] < m)
          {
               l = mid+1;
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
     int res = BinarySearch(arr, n, s, num, ind);
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
