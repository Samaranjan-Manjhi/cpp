#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minPlatforms(vector<int>& arrivals, vector<int>& departures, int N) 
{
     sort(arrivals.begin(), arrivals.end());
     sort(departures.begin(), departures.end());

     int platform_count = 1;  
     int max_platforms = 1;

     int i = 1, j = 0;  

     while (i < N && j < N) 
     {
          if (arrivals[i] <= departures[j]) 
          {
               platform_count++;  
               i++;  
          } 
          else 
          {
               platform_count--;  
               j++;  
          }

          max_platforms = max(max_platforms, platform_count);
     }
     return max_platforms;
}

int main() 
{
     vector<int> arrivals = {900, 940, 950};
     vector<int> departures = {910, 1200, 1120};
     int N = arrivals.size();  
     cout << "Minimum platforms required: " << minPlatforms(arrivals, departures, N) << endl;
     return 0;
}

