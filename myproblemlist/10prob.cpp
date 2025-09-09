//Rotate Array by K Steps

// Given an array, rotate it to the right by k steps.
//Example: nums = [1,2,3,4,5,6,7], k=3 → [5,6,7,1,2,3,4]
//Approach
// Method 1: Rotate one by one (O(n*k), bad).
// Method 2 (Optimal):
// Reverse whole array.
// Reverse first k elements.
// Reverse last n-k elements.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotateArray(nums, k);
    for (int x : nums) cout << x << " ";
    return 0;
}

