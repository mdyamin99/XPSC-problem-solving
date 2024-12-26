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

    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll x=n/a;
    ll y=n/b;
    ll lc=((a*b)/__gcd(a,b));
    ll lcc=n/lc;
    if(p<q) x-=lcc;
    else y-=lcc;
    cout<<(x*p)+(y*q)<<endl;
    return 0;
}