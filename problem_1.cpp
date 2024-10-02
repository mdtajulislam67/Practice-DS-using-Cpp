#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s1,s2;
    int n;
    int x;
    for(int i=1;i<=n;i++)
    {
        
        cin>>x;
        s1.push(x);
    }
    int m;
    for(int i=1;i<=m;i++)
    {
        cin>>x;
        s2.push(x);
    }
    int flag=1;
    if(s1.size()!=s2.size())
    {
        cout<<"NO"<<endl;
    }
    while(!s1.empty())
    {
        if(s1.top()!=s2.top())
        {
            flag=0;
            break;
        }
        s1.pop();
        s2.pop();
    }
    if(flag==1)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}