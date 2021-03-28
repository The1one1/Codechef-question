#include<bits/stdc++.h>
using namespace std;
/*int min(int s,int d)
{
	if(s>d)
	return d;
	else
	return s;
}*/
int main(){
	long int t;
	cin>>t;
	while(t--){
		long int a,y,x,z=0;
		cin>>a>>y>>x;
		//long int h=min(y,a);
		if(a<=y)
		{
		    z=z+x*a;
		}
	
	else if(y<a)
	   {
	       z=z+y*x;
	   }
		if(y>a)
		{
			z+=1;
		}
		cout<<z<<endl;
	}
}/*#include<bits/stdc++.h>
using namespace std;
int min(int s,int d)
{
	if(s>d)
	return s;
	else
	return d;
}
int main(){
	long int t;
	cin>>t;
	while(t--){
		long int a,y,x,z=0;
		cin>>a>>y>>x;
		long int h=min(y,a);
		for(long int i=1;i<=g;i++)
		{
			if(i+y>a)
			{
				z+=x;
			}
			
		}
		cout<<"y is:"<<y<<endl;
		if(y>a)
		{
			z+=1;
		}
		cout<<z<<endl;
	}
}*/
