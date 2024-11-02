#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    map<int,int> mp;
    while(t--)
    {
        int n;
        cin>>n;
        mp[n]++;
    }
    int ans=0;
    for(auto [x,y]:mp)
    {
        ans=max(ans,y);
    }
    cout<<ans<<endl;
    return 0;
}