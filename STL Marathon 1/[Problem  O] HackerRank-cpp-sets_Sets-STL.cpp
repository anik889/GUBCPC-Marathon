//Problem Link- https://www.hackerrank.com/contests/master/challenges/cpp-sets/problem
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int q;
    cin>>q;
    set<long long int>s;
    for(int i=0;i<q;i++){
        int p,x;
        cin>>p;
        if(p==1){
            cin>>x;
            s.insert(x);
        }else if(p==3){
            cin>>x;
            if(s.count(x))      cout<<"Yes"<<endl;
            else    cout<<"No"<<endl;
        }else if(p==2){
            cin>>x;
            s.erase(x);
        }
    }
}
int main(){
    int t=1;
    for(int i=0;i<t;i++)
        solve();
}
