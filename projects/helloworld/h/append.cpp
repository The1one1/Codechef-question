#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    long long int t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
        long long int n,k=0;
        cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long int i=1;i<n;i++)
        {
            if(a[i-1]>=a[i])
            {
            	if(a[i]==0)
                    {
                    	a[i]=a[i-1]+1;
                    	k=k+log10(a[i])+1;
                    	continue;
					}
                long long int y=log10(a[i-1])-log10(a[i]);                                                   
                a[i]=a[i]*pow(10,y);
                k=k+y;  
                y=pow(10,y);
                    long long int g=a[i-1]%y;
                    
                    if(log10(g)-log10(g+1)==0)
                    {
                        a[i]=a[i]+g+1;
                    }
                    else
                    {
                        a[i]=a[i]+g;
                    }
					
                    if(a[i-1]<a[i])
                    break;
                    a[i]=a[i]*10;
                    k++;
                    for(long long int j=0; ;j++)
                    {
                        a[i]=a[i]+j;
                        if(a[i-1]<a[i])
                        break;
                    }
                    
            }
        }
        cout<<"Case #"<<l<<": "<<k<<endl;
       /* for(int i=0;i<n;i++)
        cout<<a[i]<<" "<<endl;*/
    }
}