#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,c;
	cin>>t;
	while(t--)
	{
		cin>>c;
		long long int a=0,b=0,x=0;
		for(long long int i=0; ;i++)
		{
			x=c%2;
			//c=c/2;
			if(c>=2)
			{
			if(x==0)
			{
				long long int d=pow(2,i);
				a+=d;
				b+=d;
			//	cout<<"a"<<a<<"b"<<a<<"\n";
			}
			else if(x==1)
				b+=pow(2,i);
	     	}
		if(c<2)
		{
			a+=pow(2,i);
		//	cout<<"break"<<a;
			break;
		}
		c=c/2;
		}
	//	cout<<"\na is:"<<a<<"b is:"<<b<<"\n";
		cout<<a*b<<"\n";
	}
}
