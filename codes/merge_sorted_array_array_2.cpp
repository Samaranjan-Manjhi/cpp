#include <iostream>
#include <vector>

using namespace std;

void mergeArrays(int ARR1[], int M, int ARR2[], int N) 
{
     int i = M - 1; 
     int j = N - 1; 
     int k = M + N - 1; 

     while (i >= 0 && j >= 0) 
     {
          if (ARR1[i] > ARR2[j]) 
          {
               ARR2[k--] = ARR1[i--];
          } 
          else 
          {
               ARR2[k--] = ARR2[j--];
          }
     }
     while (i >= 0) 
     {
          ARR2[k--] = ARR1[i--];
     }
}

int main() 
{
     int ARR1[4] = {1, 3, 5, 7};  // Original ARR1 with M elements (size 4)
     int ARR2[8] = {2, 4, 6, 8, 0, 0, 0, 0};  // ARR2 with N elements and space for M + N

     int M = 4;  // Number of elements in ARR1
     int N = 4;  // Number of elements in ARR2

     mergeArrays(ARR1, M, ARR2, N);
     cout << "Merged Array: ";
     for (int i = 0; i < M + N; i++) 
     {
          cout << ARR2[i] << " ";
     }
     cout << endl;

     return 0;
}

