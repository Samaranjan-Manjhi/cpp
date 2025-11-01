#include <iostream>
#include <vector>
#include <algorithm>  // For std::max

using namespace std;

int maxSubArraySum(const vector<int>& nums) {
    int current_sum = 0;
    int max_sum = nums[0];  // Start with the first element as the initial max sum.

    for (int num : nums) {
        // Add current number to current_sum or start a new subarray if current_sum is negative.
        current_sum = max(num, current_sum + num);

        // Update max_sum if current_sum is greater.
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main() {
    vector<int> nums = {34, -50, 42, 14, -5, 86};

    cout << "Maximum sum of contiguous subarray: " << maxSubArraySum(nums) << endl;

    return 0;
}

