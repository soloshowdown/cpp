//check if array is sorted

#include <bits/stdc++.h>
using namespace std;

 int isSorted(int n,vector<int> &a) {
    for(int i=0;i<n;i++) {
        if (a[i] >= a[i-1]) {}
        else {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<isSorted(n,a)<<endl;
    return 0;
}


