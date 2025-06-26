//rotate array to left by one place
//not on leetcode
#include<bits/stdc++.h>
using namespace std;
vector<int> rotate(vector<int> &arr, int n) {
    int temp =arr[0];
    for (int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++) {
        cin>>arr[arr_i];
    }
    rotate(arr, n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;

}
