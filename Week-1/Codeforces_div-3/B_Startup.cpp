#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        map<int,long long> mp;
        while(k--)
        {
            int a,b;
            cin>>a>>b;
            mp[a]+=b;
        }
        vector<long long> v;
        for(auto [x,y]:mp)
        {
            v.push_back(y);
        }
        sort(v.rbegin(),v.rend());
        long long ans=0;
        for(int i=0;i<min(n,(int)v.size());i++)
        {
            ans+=v[i];
        }
        cout<<ans<<endl;









        // int n,k;
        // cin>>n>>k;
        // map<int,vector<int>> mp;
        // while(k--)
        // {
        //     int a,b;
        //     cin>>a>>b;
        //     mp[a].push_back(b);
        // }
        // vector<long long> v;
        // for(auto [x,y]:mp)
        // {
        //     long long cost=0;
        //     sort(y.rbegin(),y.rend());
        //     for(auto c:y)
        //     {
        //         cost+=c;
        //     }
        //     v.push_back(cost);
        // }
        // sort(v.rbegin(),v.rend());
        // long long ans=0;
        // for(int i=0;i<min(n,(int)v.size());i++)
        // {
        //     ans+=v[i];
        // }
        // cout<<ans<<endl;
    }
    return 0;
}