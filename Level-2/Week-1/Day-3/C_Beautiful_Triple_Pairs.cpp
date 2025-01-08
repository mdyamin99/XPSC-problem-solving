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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        ll ans=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<tuple<ll,ll,ll>,ll> mp;
        for(int i=0;i<n-2;i++){
            ans+=(mp[{v[i],v[i+1],-1}]+mp[{v[i],-1,v[i+2]}]+mp[{-1,v[i+1],v[i+2]}]-3*mp[{v[i],v[i+1],v[i+2]}]);
            mp[{v[i],v[i+1],-1}]++;
            mp[{v[i],-1,v[i+2]}]++;
            mp[{-1,v[i+1],v[i+2]}]++;
            mp[{v[i],v[i+1],v[i+2]}]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}