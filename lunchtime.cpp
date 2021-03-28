#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		long int h[n];
		for(long int i=0;i<n;i++)
		{
			cin>>h[i];
		}
		for(long int i=0;i<n;i++)
		{
			long int z=0;
			for(long int j=i+1;j<n;j++)
			{
				if(h[j]<=h[i])
				{
					if(h[j]==h[i])
					z++;
				//	cout<<"h[i]"<<h[i]<<endl;
				//	cout<<"z1:"<<z<<endl;
				}
				else{
					break;
				}
			}
			for(long int j=i-1;j>=0;j--)
			{
					if(h[j]<=h[i])
				{
					if(h[j]==h[i])
					z++;
				//	cout<<"h[i]:"<<h[i]<<endl;
				//	cout<<"z2:"<<z<<endl;
				}
				else{
					break;
				}
			}
			cout<<z<<" ";
		}
		cout<<"\n";
	}
}
