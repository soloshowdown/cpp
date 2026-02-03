#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, count=0;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        if (s[1]=='+') count +=1;
        else count -=1;
    }
    cout<<count;
    return 0;
}