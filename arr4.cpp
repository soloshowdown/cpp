//Remove duplicates from a sorted array
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
    int i=0;
    for (int j=1;j<n;j++) {
        if (arr[i] != arr[j]) {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++) {
        cin>>arr[arr_i];
    }
    cout<<removeDuplicates(arr, n)<<endl;
    return 0;

}
