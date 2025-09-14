//Given an array of integers nums and an integer k, return the total number of continuous subarrays whose sum equals k.
// leetcode 560

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCount;
        prefixCount[0] = 1;  // base case: prefix sum = 0

        int sum = 0, count = 0;
        for (int num : nums) {
            sum += num;
            if (prefixCount.find(sum - k) != prefixCount.end()) {
                count += prefixCount[sum - k];
            }
            prefixCount[sum]++;
        }
        return count;
    }
};
int main() {
    int n, k;
    cout << "Enter size of array and k: ";
    cin >> n >> k;
    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    Solution sol;
    cout << "Number of subarrays with sum = " << k << " is: "
         << sol.subarraySum(nums, k) << endl;

    return 0;
}

