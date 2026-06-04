//Problem Link - https://atcoder.jp/contests/abc284/tasks/abc284_a?lang=en
#include<bits/stdc++.h>
using  namespace std;
int main(){
        int n;
        cin>>n;
        vector<string>a(n);
        for(int i=0;i<n;i++)        cin>>a[i];
        for(int i=n-1;i>=0;i--)        cout<<a[i]<<endl;
}
