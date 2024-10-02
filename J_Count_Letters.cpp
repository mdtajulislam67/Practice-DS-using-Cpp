#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    vector<int>s(26,0);
    while(cin>>c)
    {
        s[c-'a']++;
    }
 
    for(char i=0;i<=25;i++)
    {
        if(s[i]>0)
        {
            printf("%c : %d\n",i+'a',s[i]);
        }
    }

    return 0;
}