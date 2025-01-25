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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(all(v),greater<int>());
        ll ans=0;
        for(int i=1;i<n;i++){
            if(ans<v[i-1]) ans=v[i-1];
            v[i]+=i*k;
        }
        if(v[n-1]>ans) ans=v[n-1];
        cout<<ans<<endl;
    }
    return 0;
}