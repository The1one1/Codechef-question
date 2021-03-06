#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
    	long long int c,d=1;
		cin>>c;
		for(long long int i=1; ;i++)
		{	
		    d*=2;
			if(d>c)
			{	
				break;
			}
		}
		int g,a=0;
		for(long long int i=d-1;i>=0;i--)
		{
			if(c^i<d)
			{
				g=i*(c^i);
			    if(g>a)
				   a=g;
			}
		}
	    cout<<a<<"\n";
	}
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
	//	vector<long int> v;
		long int c,d;
		cin>>c;
		for(long int i=1; ;i++)
		{
		    d=pow(2,i);
			if(d>c)
			{	
				break;
			}
		}
		int g,a=0;
		for(long int i=d-1;i>=0;i--)
		{
			if(c^i<d)
			{
				g=i*(c^i);
			//	long int k=(i*(c^i));
			//	v.push_back(k);
			}
			if(g>a)
			{
				a=g;
			}
		}
	//	sort(v.begin(),v.end(),greater<long int>());
	//	cout<<v[0]<<"\n";
	    cout<<a<<"\n";
	}
}
