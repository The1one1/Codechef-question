/*#include<bits/stdc++.h >
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],x=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
	
		sort(a,a+n);
		if(a[n-1]>n)
		for(int i=0;i<n;i++)
		/*
		3 1 1 3
		1 1 3 3 
		1 + 1=2
		-2+1+3=2
		
		
		//	if(a[i]<(i+1))
		//	{
				x+=(i+1-a[i]);
		//	}
		}
		if(x%2!=0&&x>0)
		{
			cout<<"First\n";
		}
		else
		{
			cout<<"Second\n";
		}
	}
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long int a[n],x=0;
		for(long int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
	//	if(a[n-1]<=n)
		for(long int i=0;i<n;i++)
		{
		if(a[i]>(i+1))
		{
			x=0;
			break;
		}
		   else	if(a[i]<(i+1))
			{
				x+=(i+1-a[i]);
			}
		}
		if(x%2!=0)
		{
			cout<<"First\n";
		}
		else
		{
			cout<<"Second\n";
		}
	}
}
