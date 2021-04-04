#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,ans=0,mx,q[1005],st,qu;
    string s[1005];
    cin>>st>>qu;
    for(i=0;i<st;i++) cin>>s[i];
    for(i=0;i<qu;i++) cin>>q[i];
    for(i=0;i<qu;i++)
    {
       int cnt[10]={0};
        for(j=0;j<st;j++) cnt[s[j][i]-'A']++;
        for(j=mx=0;j<5;j++)
            mx=max(mx,cnt[j]);
        ans+=q[i]*mx;
    }
    cout<<ans<<endl;
    return 0;
}
