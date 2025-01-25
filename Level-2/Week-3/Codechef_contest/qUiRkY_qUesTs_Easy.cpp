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

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(all(v));
        ll uttor=accumulate(all(v),0ll);
        ll jog=uttor;
        for(ll i=0;i<n;i++){
            jog-=v[i];
            uttor=max(uttor,jog+(i+1)*(i+1));
        }
        uttor=max(uttor,n*n);
        cout<<uttor<<endl;
    }
    return 0;
}