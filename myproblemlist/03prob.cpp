//Maximum Subarray Sum (Kadane’s Algorithm) – (LeetCode Easy / Codeforces Classic)
//Find the contiguous subarray with the maximum sum.
//Use Kadane’s Algorithm:

//Keep track of current_sum and reset if it goes below 0.

//Update max_sum.

//Time Complexity: O(n)

//Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int max_sum = nums[0];
    int current_sum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        current_sum = max(nums[i], current_sum + nums[i]);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums) << endl; // Output: 6
    return 0;
}
