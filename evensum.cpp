#include<bits/stdc++.h>
using namespace std;
/*int max(int g,int h)
{
	if(g>h)
	return g;
	else
	return h;
}*/
int main(){
	long int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		long int a[n],sum=0;
		bool flag=0;
		for(long int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==2)
			{
			    flag=1;
			}
			sum+=a[i];
		}
		if(sum%2==0)
		{
			cout<<0<<"\n";
		}
		else if(sum%2!=0&&flag==1)
		{
		    cout<<1<<"\n";
		    
		/*	int y=0;
			for(long int i=0;i<n;i++)
			{
				sum=sum-a[i];
				int x=pow(a[i],max(0,(a[i]/2)-1));
				sum=sum+x;
				if(sum%2==0)
				{
					cout<<1<<"\n";
					break;
				}
				sum=sum-x+a[i];
				y++;
			}
			if(y==n)
			{
				cout<<-1<<"\n";
			}*/
		}
		else if(sum%2!=0&&flag==0)
		{
		    cout<<"-1"<<"\n";
		}
    }
 }
