// arrays Q1: largest element in the array

#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr,int n) {
    int largest=arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i]>largest) {
            largest=arr[i];
        }
    }return largest;
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<largestElement(arr,n)<<endl;
    return 0;
}
