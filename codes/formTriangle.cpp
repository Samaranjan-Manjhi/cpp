#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canFormTriangle(const vector<int>& arr) 
{
     int N = arr.size();
     if (N < 3) 
          return false;
     vector<int> sortedArr = arr;
     sort(sortedArr.begin(), sortedArr.end());
     for (int i = 0; i < N - 2; ++i) 
     {
          if (sortedArr[i] + sortedArr[i+1] > sortedArr[i+2]) 
          {
               return true;  
          }
     }
     return false;  
}

int main() 
{
     //vector<int> arr = {10, 5, 12, 8, 4};   
     vector<int> arr = {5, 3, 4};   
     if (canFormTriangle(arr)) 
     {
          cout << "Yes, it's possible to form a non-degenerate triangle." << endl;
     } 
     else 
     {
          cout << "No, it's not possible to form a non-degenerate triangle." << endl;
     }
     return 0;
}

