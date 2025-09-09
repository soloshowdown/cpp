//Check if Array is Sorted (Codeforces Beginner)
// Check if a given array is sorted in non-decreasing order.
//Approach
//Loop through array, check if arr[i] > arr[i+1]. If yes, return false.
//Time Complexity: O(n)
//Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i+1]) return false;
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << (isSorted(arr) ? "YES" : "NO") << endl; // Output: YES
    return 0;
}

