#include<bits/stdc++.h>
using namespace std;
int count(int n){
    int count=0;
    while(n){
            n=n&(n-1);
            count++;
        }
        return count;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b,counta=0,countb=0,countc=0;
        cin>>a>>b;
        countb=count(b-1);
        counta=count(a);
        if(counta==1)
        {
            counta=count(a-1);
            cout<<abs(countb-counta)<<"\n";
        }
        else
        {
            while(1)
            {
                a=a>>1;
                countc++;
                if(count(a)==1)
                {
                    cout<<countc+abs(countb-count(a-1))<<"\n";
                    break;
                }
            }
        }
    }
}
