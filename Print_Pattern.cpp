#include<iostream>
using namespace std;
int main()
{
    short t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n][n];
        int k=1,x=0,y=0;
        int v=n*n;
        while(v--)
        {
        for(short i=0;i<n;i++)
        {
            for(short j=0;j<n;j++)
            {
                if((i+j)==x)
                {
                   a[i][j]=k;
                   k++;
                   y++;
                   if(y==x)
                       goto last;
                }
            }
        }
        x++;
        last:;
        }
        for(short i=0;i<n;i++)
        {
            for(short j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}