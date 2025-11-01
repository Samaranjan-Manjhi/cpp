#include <iostream>

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
               ARR1[k--] = ARR1[i--];
          } 
          else 
          {
               ARR1[k--] = ARR2[j--];
          }
     }

     while (j >= 0) 
     {
          ARR1[k--] = ARR2[j--];
     }
}

int main() {
     int ARR1[8] = {1, 3, 5, 7};  // Original ARR1 with M elements (size 4)
     int ARR2[4] = {2, 4, 6, 8};  // ARR2 with N elements (size 4)

     int M = 4;  // Number of elements in ARR1
     int N = 4;  // Number of elements in ARR2

     mergeArrays(ARR1, M, ARR2, N);
     cout << "Merged Array: ";
     for (int i = 0; i < M + N; i++) 
     {
          cout << ARR1[i] << " ";
     }
     cout << endl;

     return 0;
}

