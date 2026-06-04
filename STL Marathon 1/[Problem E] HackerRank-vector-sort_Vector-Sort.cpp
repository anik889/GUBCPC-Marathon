//Problem Link - https://www.hackerrank.com/contests/master/challenges/vector-sort/problem
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
          cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
          cout<<a[i]<<' ';
}
