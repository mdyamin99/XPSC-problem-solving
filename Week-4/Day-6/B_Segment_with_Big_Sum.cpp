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

    ll n,c;
    cin>>n>>c;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll l=0,r=0,sum=0,ans=INT_MAX;
    while(n>r){
        sum+=v[r];
        if(sum>=c){
            while(sum>=c){
                sum-=v[l];
                l++;
            }
            ans=min(ans,r-l+2);
        }
        r++;
    }
    if(ans==INT_MAX) cout<<"-1"<<endl;
    else cout<<ans<<endl;
    return 0;
}