#include <iostream>

using namespace std;

void printArray(int arr[], int n)
{
     for(int i=0; i<n; i++)
          cout << arr[i] << " " ;
     cout << endl;
}

void bubble_sort(int arr[], int n)
{
     for(int i=0; i<n-1; i++)
     {
          for(int j=0; j<n-i-1; j++)
          {
               if(arr[j] > arr[j+1])
               {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
               }
          }
     }
}

int main(int argc, char* argv[])
{
     int size;
     cout << "Enter the size of array: ";
     cin >> size;

     int arr[size];
     cout << "Enter the array elements: ";
     for(int i=0; i<size; i++)
     {
          cin >> arr[i];
     }
     cout << "Elemets of array before sorting: ";
     printArray(arr, size);
     bubble_sort(arr, size);
     cout << "Elemets of array after sorting: ";
     printArray(arr, size);
     return 0;
}
