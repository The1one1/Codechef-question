#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char a[3][3];
        int _count=0,xcount=0,ocount=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
           {
               cin>>a[i][j];
               if(a[i][j]=='_')
               _count++;
               else if(a[i][j]=='X')
               xcount++;
               else
               ocount++;
           }
        }
        int xcond=0,ocond=0;
        for(int i=0;i<3;i++)
        {
            if((a[i][0]==a[i][1])&&(a[i][1]==a[i][2]))
            {
               if(a[i][0]=='X')
               xcond++;
               else if(a[i][0]=='O')
               ocond++;
            }
        }
        for(int i=0;i<3;i++)
        {
            if((a[0][i]==a[1][i])&&(a[1][i]==a[2][i]))
            {
                if(a[0][i]=='X')
                xcond++;
                else if(a[0][i]=='O')
                ocond++;
            }
        }
        
        if((a[0][0]==a[1][1])&&(a[1][1]==a[2][2]))
        {
            if(a[0][0]=='X')
            xcond++;
            else if(a[0][0]=='O')
            ocond++;
        }
        
        if((a[0][2]==a[1][1])&&(a[1][1]==a[2][0]))
        {
            if(a[0][2]=='X')
            xcond++;
            else if(a[0][2]=='O')
            ocond++;
        }
		
        int tcond=xcond+ocond;
		if(xcount-ocount>1||xcount-ocount<0)  
		cout<<3<<"\n";
		else if(_count==0)
		{
			if(xcount-ocount==1)
			{
				if(tcond==0||(tcond==1&&xcond==1))
				cout<<1<<"\n";
				else if(xcond==2&&ocond==0)
				cout<<1<<"\n";
				else 
				cout<<3<<"\n";
			}
			else
			cout<<3<<"\n";
		}
		else if(_count!=0)
		{
			if(_count%2==1)
			{
				if(xcount==ocount)
				{
					if(tcond==1&&ocond==1)
					cout<<1<<"\n";
					else if(tcond==0)
					cout<<2<<"\n";
					else 
					cout<<3<<"\n";
				}
				else cout<<3<<"\n";
			}
			else if(_count%2==0)
			{
				if(xcount-ocount==1)
				{
					if(xcond==1&&ocond==0)
					cout<<1<<"\n";
					else if(tcond==0)
					cout<<2<<"\n";
					else
					cout<<3<<"\n";
				}
				else cout<<3<<"\n";
			}
		}
    }
}
