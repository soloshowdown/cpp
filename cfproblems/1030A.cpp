//
// Created by kunal on 01-06-2026.
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin>>n;

    for (int i=0;i<n;i++) {
        cin>>x;
        if (x==1) {
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"Easy";
    return 0;
}