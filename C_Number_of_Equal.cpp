#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin>>n>>m;
    map<ll,ll> mp;
    map<ll,ll> mpp;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        mpp[x]++;
    }
    ll ans=0;
    for(auto [x,y]:mp){
        if(mpp.count(x)){
            ans+=y*mpp[x];
        }
    }
    cout<<ans<<endl;
    return 0;
}