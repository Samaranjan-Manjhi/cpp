#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> findIntersection(const vector<int>& ARR1, const vector<int>& ARR2) 
{
     unordered_set<int> set1;
     vector<int> intersection;  
     for (int num : ARR1) 
     {
          set1.insert(num);
     }
     for (int num : ARR2) 
     {
          if (set1.find(num) != set1.end()) 
          {
               intersection.push_back(num);
               //set1.erase(num);  
          }
     }
     return intersection;
}

void printArray(const vector<int>& arr) 
{
     for (int num : arr) 
     {
          cout << num << " ";
     }
     cout << endl;
}

int main() 
{
     vector<int> ARR1 = {1, 2, 2, 3, 4};
     vector<int> ARR2 = {2, 2, 5};
     vector<int> result = findIntersection(ARR1, ARR2);
     cout << "Intersection: ";
     printArray(result);
     return 0;
}

