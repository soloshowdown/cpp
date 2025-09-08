//TWO SUM -> LC EASY
//Q: given an array of integers and an integer target, return indicea of two numbers such that they add up to target
//Optimized way: Use a hashmap to store visited numbers. For each number x, check if target - x exists in the map.
//tc:O(n) sc:O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // value -> index
    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];
        if (mp.find(need) != mp.end()) {
            return {mp[need], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = twoSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}


