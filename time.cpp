#include<iostream>
using namespace std;
int main()
{
	short n,h,x,a=0;
	cin>>n>>h>>x;
	short t[n];
	for(short i=0;i<n;i++)
	{
		cin>>t[i];
	}
	for(short i=0;i<n;i++)
	{
		t[i]+=x;
		if(t[i]>=h)
		{
			a=1;
			break;
		}
    }
	if(a==1)
	cout<<"YES";
	else
	{
		cout<<"NO";
	}
}
