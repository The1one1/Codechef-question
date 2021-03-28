#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t--){
		long int n,x;
		cin>>n>>x;
		//vector<int> s;
		vector<long int> r;
		for(long int i=0;i<n;i++)
		{
		    long int f,g;
			cin>>f>>g;
			if(f<=x)	
			{
				r.push_back(g);
			}
		}
		long int y=*max_element(r.begin(),r.end());
		cout<<y<<"\n";	
	}
}
