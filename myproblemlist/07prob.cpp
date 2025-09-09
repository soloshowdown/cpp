//Count Frequency of Elements
// Given an array, print frequency of each element.
//Approach
// Use a hashmap (unordered_map).
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

void countFrequency(vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;

    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 1, 4};
    countFrequency(arr);
    return 0;
}

