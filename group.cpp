#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int a=0,k=0;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='0')
			{
				k=0;
			}
			if(s[i]=='1')
			{
				k++;
				if(k==1)
				{
					a++;
				}
			}
		}
	cout<<a<<"\n";
	}
}
