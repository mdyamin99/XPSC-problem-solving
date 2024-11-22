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

    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll l=0,r=0,sum=0,ans=0;
    while(n>r){
        sum+=v[r];
        while(sum>=k && l<=r){
            sum-=v[l];
            l++;
        }
        ans+=l;
        r++;
    }
    cout<<ans<<endl;
    return 0;
}