//Problem Link - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2949
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int n,m;
    while(cin>>n>>m && n!=0 && m!=0){
        vector<long long int>a(n);
        vector<long long int>b(m);
        for(int i=0;i<n;i++)    cin>>a[i];
        for(int j=0;j<m;j++)    cin>>b[j];
        long long int i=0,j=0,count=0;
        while(i<n && j<m){
            if(a[i]==b[j]){      count++;i++;j++;}
            else if(a[i]<b[j])  i++;
            else if(b[j]<a[i])  j++;
        }
        cout<<count<<endl;
    }
}
int main(){
    solve();
}
