#include <bits/stdc++.h>
using namespace std;
float round(float &var)
{
	float value = (int)(var * 100 + .5);
	return (float)value / 100;
}
int main()
{
	float t;
	cin>>t;
	while(t--)
	{
		float k1,k2,k3,v,var;
		cin>>k1>>k2>>k3>>v;
		k1=k1*k2*k3*v;
		var=100/k1;
	if(round(var)<9.57)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}
    }
	return 0;  
}

