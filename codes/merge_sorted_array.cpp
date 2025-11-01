#include <iostream>
#include <vector>

using namespace std;

void mergeArrays(vector<int>& ARR1, int M, vector<int>& ARR2, int N) {
     // Ensure ARR1 has enough space for merging (M + N size)
     ARR1.resize(M + N);  // Resize ARR1 to accommodate both ARR1 and ARR2

     int i = M - 1;  // Pointer for the end of original ARR1
     int j = N - 1;  // Pointer for the end of ARR2
     int k = M + N - 1;  // Pointer for the last position in ARR1

     // Merge ARR1 and ARR2 from the end to avoid overwriting
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

     // If there are remaining elements in ARR2, copy them
     while (j >= 0) 
     {
          ARR1[k--] = ARR2[j--];
     }

     // No need to handle ARR1 as it's already in place
}

int main() 
{
     // Example arrays (ARR1 has extra space at the end)
     vector<int> ARR1 = {1, 3, 5, 7};  // Original ARR1 with M elements
     vector<int> ARR2 = {2, 4, 6, 8};  // ARR2 with N elements

     int M = ARR1.size();  // Size of ARR1 (before resizing)
     int N = ARR2.size();  // Size of ARR2

     // Merge ARR2 into ARR1
     mergeArrays(ARR1, M, ARR2, N);

     // Output the merged array
     cout << "Merged Array: ";
     for (int num : ARR1) {
          cout << num << " ";
     }
     cout << endl;

     return 0;
}

