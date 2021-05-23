#include<bits/stdc++.h>
using namespace std;

int input(stack<int> &s,int x)
{
    int m(0);
    vector<int> v(x);
    for(auto &it:v)
    {
        cin>>it;
        m+=it;
    }
    for(int i=x-1;i>=0;i--)
        s.push(v[i]);
    return m;
}

int min(int a,int b,int c)
{
    if(a<=b&&a<=c) return a;
    
    else if(b<=c&&b<=a) return b;
    
    else return c;
}

int main()
{
    int a,b,c,h1(0),h2(0),h3(0);
    cin>>a>>b>>c;
    stack<int> s_a,s_b,s_c;
    h1=input(s_a,a);   h2=input(s_b,b);    h3=input(s_c,c);
    //cout<<"h1:"<<h1<<" h2:"<<h2<<" h3:"<<h3<<"\n";
    int h=0, l;
    while(true)
    {
       // cout<<"\nh:"<<h<<endl;
        l=min(h1,h2,h3);
       // cout<<"l:"<<l<<"\n";
        if(h1==h2&&h2==h3)
        {
            h=h1;
            break;
        }
       // cout<<"m:"<<m<<"\n";
        if(h1>l)  
        { 
            if(!s_a.empty())
            {   
              // cout<<"a.top():"<<s_a.top()<<" ";
               h1-=s_a.top();
               s_a.pop();
               //cout<<"h1:"<<h1<<" ";
            }
        }
        if(h2>l)
        {  
            if(!s_b.empty())
            {
               // cout<<"b.top():"<<s_b.top()<<" ";
                h2-=s_b.top();
                s_b.pop();
                //cout<<"h2:"<<h2<<" ";
            }
        }
        if(h3>l)
        {
            if(!s_c.empty())
            {
              //  cout<<"c.top():"<<s_c.top()<<" ";
                h3-=s_c.top();
                s_c.pop();
                //cout<<"h3:"<<h3<<" ";
            }
        }
       // cout<<endl;
    }
    cout<<h<<"\n";
}