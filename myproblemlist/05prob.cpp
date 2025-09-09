//Palindrome Check (LeetCode Easy / Codeforces Basic)
// Approach
//Use two-pointer approach (compare start & end).
//Time Complexity: O(n)
//Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string s = "madam";
    cout << (isPalindrome(s) ? "YES" : "NO") << endl; // Output: YES
    return 0;
}

