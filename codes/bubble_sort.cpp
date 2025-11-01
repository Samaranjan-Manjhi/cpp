#include <iostream>
using namespace std;

void bubbleSort(int arr[], int N) 
{
     for (int i = 0; i < N - 1; i++) 
     {
          for (int j = 0; j < N - i - 1; j++) 
          {
               if (arr[j] > arr[j + 1]) 
               {
                    // Swap arr[j] and arr[j + 1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
               }
          }
     }
}

void printArray(int arr[], int N) 
{
     for (int i = 0; i < N; i++) 
     {
          cout << arr[i] << " ";
     }
     cout << endl;
}

int main() 
{
     int arr[] = {64, 34, 25, 12, 22, 11, 90};
     int N = sizeof(arr) / sizeof(arr[0]);
     cout << "Original array: ";
     printArray(arr, N);
     bubbleSort(arr, N);
     cout << "Sorted array: ";
     printArray(arr, N);
     return 0;
}

