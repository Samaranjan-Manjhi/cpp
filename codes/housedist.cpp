#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

// Function to count the number of valid combinations
int countValidHouseChoices(vector<int>& houses, int X) {
     int validCombinations = 0;
     int n = houses.size();

     // Sort the house distances
     sort(houses.begin(), houses.end());

     // Generate all combinations of 4 houses
     for (int i = 0; i < n - 3; ++i) {
          for (int j = i + 1; j < n - 2; ++j) {
               for (int k = j + 1; k < n - 1; ++k) {
                    for (int l = k + 1; l < n; ++l) {
                         // Check if the distance between the farthest and nearest house is less than X
                         if (houses[l] - houses[i] < X) {
                              ++validCombinations;
                         }
                    }
               }
          }
     }

     return validCombinations;
}

int main() {
     // Example usage
     vector<int> houses = {1, 3, 4, 7, 10, 12, 15};  // Example house distances
     int X = 6;  // Distance threshold

     int result = countValidHouseChoices(houses, X);
     cout << "Number of valid house choices: " << result << endl;

     return 0;
}

