#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t--){
		long int u,v,a,s;
		cin>>u>>v>>a>>s;
		float x= (u*u-2*a*(float)s);
		if(x<0)
		{
		    cout<<"Yes\n";
		}
		else if(sqrt(x)<=(float)v)
		{
			cout<<"Yes\n";
		}
		else
		cout<<"No\n";
     }
 }
