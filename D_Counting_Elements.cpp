#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if (find(a.begin()+i+1, a.end(), a[i]+1) != a.end())
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}