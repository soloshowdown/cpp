//Find Missing Number (LeetCode Easy)  ->Given an array of size n containing numbers from 0..n, find the missing number.

// Approach
// Formula for sum of first n numbers = n * (n + 1) / 2.
// Subtract array sum from it
// Time Complexity: O(n)
// Space Complexity: O(1)


#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int total = n * (n + 1) / 2;
    int sum = accumulate(nums.begin(), nums.end(), 0);
    return total - sum;
}

int main() {
    vector<int> nums = {3, 0, 1};
    cout << missingNumber(nums) << endl; // Output: 2
    return 0;
}
