#include<bits/stdc++.h>
long long int price;
using namespace std;
long long int res(long long  int n,long long int e ,long long int h,long long  int a,long long int b,long long int c);

long long int minv(long long int x,long long int y)
{
	if(x<y)
	{
		return x;
	}
	return y;
}
long long int maxv(long long int x,long long int y)
{
	if(x<y)
	{
		return y;
	}
	return x;
}
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long int n,e,h,a,b,c;
		cin>>n>>e>>h>>a>>b>>c;
		long long int ans;
		ans=res(n,e,h,a,b,c);
		
		if(ans==1e15)
		{
			cout<<-1<<"\n";
	    }
	    else
	    cout<<ans<<"\n";    
	}
	return 0;
}
long long int res(long long int n,long long int e ,long long int h,long long  int a,long long int b,long long int c)
{
	if(n<=0)
    {
		return 0;
	}
	long long int ans=1e15;
	if((n<=e)&&(n<=h))
	{
		ans=minv(ans,n*c);
	}
	if(3*n<=h)
	{
		ans=minv(ans,n*b);
	}
	if(2*n<=e)
	{
		ans=minv(ans,n*a);
	}
	
	if((h-n)/2>=1&&((h-n)/2>=n-e))
	{
		if(b<c)
		{
			long long int temp=minv(n-1,(h-n)/2);
			ans=minv(ans,(b-c)*temp+n*c);
		}
	    else
		{
			long long int temp=maxv(1,n-e);
			ans=minv(ans,(b-c)*temp+n*c);
		}	
	}
	if((e-n)>=1&&(e-n)>=(n-h))
	{
		if(a<c){
			long long temp=minv(n-1,e-n);
			ans=minv(ans,(a-c)*temp+n*c);
		}
		else
		{
			long long temp=maxv(1,n-h);
			ans=minv(ans,(a-c)*temp+n*c);
		}
	}
	if((e/2>=1)&&(e/2>=(3*n-h+2)/3))
	{
		if(a<b)
		{
			long long int temp=minv(n-1,e/2);
				ans=minv(ans,(a-b)*temp+n*b);
		}
		else
		{
			long long int temp=maxv(1,(3*n-h+2)/3);
			ans=minv(ans,(a-b)*temp+n*b);
		}
	}
	if((e>=3)&&(h>=4)&&(n>=3))
	{
		//long long int price=ans;
		ans=minv(ans,a+b+c+res(n-3,e-3,h-4,a,b,c));
	}
	return ans;
}



