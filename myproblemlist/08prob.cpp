//Merge Two Sorted Arrays
// Approach
// Use two pointers.
// Like in merge step of merge sort.
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)


#include <bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vector<int>& a, vector<int>& b) {
    vector<int> res;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) res.push_back(a[i++]);
        else res.push_back(b[j++]);
    }
    while (i < a.size()) res.push_back(a[i++]);
    while (j < b.size()) res.push_back(b[j++]);
    return res;
}

int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6};
    vector<int> ans = mergeArrays(a, b);
    for (int x : ans) cout << x << " ";
    return 0;
}
