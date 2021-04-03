#include<iostream>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long int sum=0;
		sum=44*(n/4);
	//	cout<<"1:"<<sum<<endl;
		if(n%4==1)
		{
			sum+=20;
		/*	if(n/4!=0)
			{
				sum+=12;
			}*/
		//		cout<<"2:"<<sum<<endl;
		}
		if(n%4==2)
		{
			sum+=36;
		/*	if(n/4!=0)
			{
				sum+=8;
			}*/
		//		cout<<"3:"<<sum<<endl;
		}
		if(n%4==3)
		{
			sum+=51;
		/*	if(n/4!=0)
			{
				sum+=4;
			}*/	//cout<<"4:"<<sum<<endl;
		}
		int x=0;
		if(n/4!=0&&n/4!=0)
		{
		  x=4-n%4;
		  sum+=4*x;
		  //	cout<<"5:"<<sum<<endl;
		  }
		
		cout<<sum<<"\n";
	}
}
