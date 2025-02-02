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

    int n,q;
    cin>>n>>q;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> pre(n+2);
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        pre[l]+=1;
        pre[r+1]-=1;
    }
    pre.pop_back();
    pre[0]=0;
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+pre[i];
    }
    // print(pre);
    sort(all(v));
    sort(all(pre));
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=(v[i]*pre[i+1]);
    }
    cout<<sum<<endl;
    return 0;
}