//using concept of stl i.e maps cuz arrays are useless
// map<key,value> --> map<int,int>
// time complexity for map-> log N (best,avg,worst)
// use unordered_map in most cases so time complexity->o(1) in some cases
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    //precompute
    map<int,int> mpp;
    for(int i=0;i<n;i++) {
        mpp[arr[i]]++;
    }
    //to iterate
    for (auto it : mpp) {
        cout<<it.first<<"-> "<<it.second<<endl;

    }

    int q;
    cin>>q;
    while(q--) {
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
    return 0;
}