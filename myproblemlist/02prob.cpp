//Reverse a string
// Use two-pointer swapping from both ends Or use std::reverse(s.begin(), s.end()).
//tc=)(n) SC:(1)
#include <bits/stdc++.h>
using namespace std;

void reverseString(string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        swap(s[l], s[r]);
        l++;
        r--;
    }
}

int main() {
    string s = "hello";
    reverseString(s);
    cout << s << endl; // Output: "olleh"
    return 0;
}
