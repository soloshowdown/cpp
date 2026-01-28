#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {4,3,2,5,1};
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    sort(v.rbegin(), v.rend());
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}
// for normal array a of size n
// sort(a,a+n);