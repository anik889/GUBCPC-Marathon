#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int tc=1;tc<=t;tc++){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a==b && a==c && a==d && b==c && b==d && c==d)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}