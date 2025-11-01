#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getSneakyNumbers(vector<int>& nums) 
{
     vector<int> data;
     sort(nums.begin(), nums.end());
     for(int i=0;i<nums.size()-1;i++)
     {
          if(nums[i] ==  nums[i+1])
          {
               data.push_back(nums[i]);
          }
     }
     return data;
}

int main(int argc, char* argv[])
{
     int n;
     cout << "Enter the size of the vector: ";
     cin >> n;

     vector<int> nu(n);
     cout << "Enter the elements of the vector:\n";
     for(int i=0;i<n;i++)
     {
          cin >> nu[i];
     }
     vector<int> res = getSneakyNumbers(nu);
     cout << "Output: \n";
     for(int i=0;i<res.size();i++)
     {
          cout << res[i] << " " ;
     }
     cout << endl;
     return 0;
}
