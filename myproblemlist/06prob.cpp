//Find Minimum and Maximum in Array
// Approach
// Traverse once, keep track of minVal and maxVal.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

pair<int, int> findMinMax(vector<int>& arr) {
    int mn = INT_MAX, mx = INT_MIN;
    for (int x : arr) {
        mn = min(mn, x);
        mx = max(mx, x);
    }
    return {mn, mx};
}

int main() {
    vector<int> arr = {5, 3, 8, 2, 7};
    auto ans = findMinMax(arr);
    cout << "Min: " << ans.first << ", Max: " << ans.second << endl;
    return 0;
}
