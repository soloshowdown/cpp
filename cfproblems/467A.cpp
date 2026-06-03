//
// Created by kunal on 03-06-2026.
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;

    while(n--) {
        int p,q;
        cin>>p>>q;
        if (p<=q-2) count++;

    }
    cout<<count;
}