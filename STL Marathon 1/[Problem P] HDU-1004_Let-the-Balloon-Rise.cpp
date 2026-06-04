//Problem Link - https://acm.hdu.edu.cn/showproblem.php?pid=1004
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int q;
    while(cin>>q && q!=0){
        vector<string>s(q);
        map<string,int>m;
        for(int i=0;i<q;i++){
            cin>>s[i];
            m[s[i]]++;
        }
        int maxed=0;
        string ans;
        for(auto const&p : m){
            if(p.second>maxed){
                maxed=p.second;
                ans=p.first;
            }
        }
        cout<<ans<<endl;
    }
}
int main(){
    solve();
}
