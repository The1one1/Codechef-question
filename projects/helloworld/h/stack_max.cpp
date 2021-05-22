#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,l=0;
    cin>>n;
    stack<int> s;
    while(n--)
    {
        cin>>x;
        switch(x){
            case 1: cin>>x;
                    s.push(x);
                    if(x>=l)
                    l=x;
                    break;
                    
            case 2: if(l==s.top())
                    {
                        l=0;
                        s.pop();
                        if(!s.empty())
                        {
                            x=s.size();
                            vector<int> v;
                            for(int i=0;i<x;i++)
                            {
                            v.push_back(s.top());
                            if(v[i]>=l)
                                l=v[i];
                              s.pop();
                            }
                        for(int i=x-1;i>=0;i--)
                            s.push(v[i]);
                        }
                    }
                    else
                    s.pop();
                    break;
            
            case 3: cout<<l<<"\n";
                    break;
        }
    }
}
