/*
// A simple C++ program to find sum of all subsquares of size k x k
#include <iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{	
	long int n,m,k,v,cnt=0;
	cin>>n>>m>>k;
	v=m;
	long int a[n][m];
	for(long int i=0;i<n;i++)
	{
		for(long int j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]>=k)
			{
			//	cout<<"a[i][j]:"<<a[i][j]<<endl;
				cnt++;
			}
		}	
	} 
	if(cnt==n*m)
	{
		for(int l=2;l<=n;l++)
		{
			cnt+=(n-l+1)*(m-l+1);
		}
		
	}
    //cout<<"cnt:"<<cnt<<endl;
    else if(cnt!=0)
	for(long int l=2;l<=n;l++)
	{
	     m=v;
	     
    for (long int i=0; i<n-l+1; i++)
    {
	// column of first cell in current sub-square of size k x k
	 for (long int j=0; j<m-l+1; j++)
	 {
		// Calculate and print sum of current sub-square
		int sum = 0;
		for (long int p=i; p<l+i; p++)
		{
				for (long int q=j; q<l+j; q++)
			{
				if(a[i][j]>=k)
				goto last;
				//cout<<"a["<<p<<"]["<<q<<"]"<<a[p][q]<<" ";
					sum += a[p][q];
				
			}
		//	cout<<endl;
		}
			//cout<<"sum:"<<sum<<endl;
		if(sum/(l*l)>=k)
		{
			last:
			//cout<<"sum:"<<sum<<endl;
			int x=(m-l-j+1);
			int y=(n-l-i+1);
			cnt=cnt+(x*y);
			//cout<<"x:"<<x<<"y:"<<y<<endl;
			m=j+l-1;
			if(m<l)
			goto endl;
		//cout<<"m:"	<<m<<endl;
		//cout<<"cnt:"<<cnt<<endl;
		goto start;
		}
	 }
	 start:;
    }
    end:;
}
    cout<<cnt<<"\n";
    }
return 0;
}*/






/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,k;
		cin>>n>>m>>k;
		long long int a[n][m],val=0,l=0;
	
	for(long long int i=0;i<n;i++)
	{
		for(long long int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	while(l<n)
	{
		l++;
		if(l==1)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(a[i][j]>=k)
					val=val+1;
				}
			}
		}
		else
		for(long long int i=0;i<n-l+1;i++)
		{
			for(long long int j=0;j<m-l+1;j++)
			{
				long long int sum=0;
				for(long long int k=j;k<j+l;k++)
				{
					for(long long int p=i;p<i+l;p++)
					{
						sum+=a[p][k];
					}
				}
				double avg=(double)sum/(l*l);
				if(avg>=k)
				{
					
					val=val+m-l+1-j;
					break;
				}
			}
		}
	}
	cout<<val<<endl;
}
}*/
/*
1
4 6 4
1 2 3 4 5 6
2 3 4 5 6 7
3 4 5 6 7 8
4 5 6 7 8 9
5 6 7 8 9 10
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll min(ll a,ll b)
{
	if(a<b)
	{
		return a;
	}
	else
	return b;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll t;
	cin>>t;
	while(t--)
	{
	ll n,k,m;
	cin>>n>>m>>k;
	double mat[n+1][m+1];
	for(ll i=0;i<=n;i++)
	{
		for(ll j=0;j<=m;j++)
		{
			if(i==0||j==0)
			{
				mat[i][j]=0;
			}
			else
			{
				cin>>mat[i][j];
			}
		}
	}
	for(ll i=0;i<=n;i++)
	{
		double pre=0;
		for(ll j=0;j<=m;j++)
		{
			mat[i][j]+=pre;
			pre=mat[i][j];
		}
	}
	for(ll j=0;j<=m;j++)
	{
		double pre=0;
		for(ll i=0;i<=n;i++)
		{
			mat[i][j]+=pre;
			pre=mat[i][j];
		}
	}
	ll zz=min(n,m);
	ll ans=0;
	for(ll len=1;len<=zz;len++)
	{
		for(ll i=len;i<=n;i++)
		{
			for(ll j=len;j<=m;j++)
			{
				if((mat[i][j]+mat[i-len][j-len]-mat[i][j-len]-mat[i-len][j])/(len*len)>=k)
				{
					
					ans++;
				}
			}
		}
	}
	cout<<ans<<endl;
}
}
