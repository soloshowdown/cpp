//print names 5 or n times using recursion
// Created by kunal on 14-06-2025.
#include <bits/stdc++.h>
using namespace std;


void f(int i,int n){
if(i>n) return;
cout<<"kunal\n";
f(i+1,n);
}
int main(){
int n;
cin>>n;
f(1,n);
}