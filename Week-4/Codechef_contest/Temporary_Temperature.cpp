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
        ll mn=v[0],mx=v[0];
        for(int i=0;i<n;i++){
            if(v[i]<mn){
                mn=v[i];
            }
            if(v[i]>mx){
                mx=v[i];
            }
        }
        ll left=0,right=mx-mn;
        if(right<0) right=0;
        while(left<right){
            ll a=left+(right-left)/2;
            ll b=1;
            ll x=v[0]-a;
            ll y=v[0]+a;
            for(int i=1;i<n;i++){
            ll d=v[i]-a;
            ll e=v[i]+a;
            x=max(x,d);
            y=min(y,e);
            if(x>y){
                b++;
                x=d;
                y=e;
            }
            }
            if(b<=k+1){
            right=a;
            }
            else{
                left=a+1;
            }
        }
        cout<<left<<endl;
    }
    return 0;
}