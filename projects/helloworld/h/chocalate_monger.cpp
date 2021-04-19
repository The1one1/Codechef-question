#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	short t;
	cin>>t;
	while(t--)
	{
	    ll n,x;
	    cin>>n>>x;
	    ll a[n];
	    set<ll> s;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s.insert(a[i]);
	    }
	    ll m=s.size();
	    (m+x<=n)?cout<<m:cout<<n-x;
	    cout<<"\n";
	}
	return 0;
}
