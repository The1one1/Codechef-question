#include<bits/stdc++.h>
using namespace std;
int main()
{
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  stack<int> s_insert,s_delete;
  int q;
  cin>>q;
  while(q--)
  {
    int i;
    cin>>i;
    if(i==1)
    {
      int x;
      cin>>x;
      s_insert.push(x);
    }
    else if(i==2)
    {
      if(s_delete.empty())
      while(!s_insert.empty())
      {
        s_delete.push(s_insert.top());
        s_insert.pop();
      }
      s_delete.pop();
    }
    else
    {
      if(s_delete.empty())  
      {  while(!s_insert.empty())
        {
          s_delete.push(s_insert.top());
          s_insert.pop();
        }
      }
        cout<<s_delete.top()<<"\n";
      }
  }
}
