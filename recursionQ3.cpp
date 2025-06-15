//print from n to 1
// Created by kunal on 14-06-2025.

#include<bits/stdc++.h>
using namespace std;

void f(int n){
    if(n<1) return;
    cout<<n<<" ";
    f(n-1);
}

int main() {
    int n;
    cin>>n;
    f(n);
}