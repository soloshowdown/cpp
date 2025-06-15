//reverse the array using recursion

#include<bits/stdc++.h>
using namespace std;

void f(int i,int arr[],int n) {
    if (i<=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}