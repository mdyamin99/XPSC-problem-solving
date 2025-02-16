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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll> pre(n),suf(n);
        pre[0]=max(0,v[0]);
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+max(0,v[i]);
        }
        // print(pre);
        suf[n-1]=max(0,-v[n-1]);
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+max(0,-v[i]);
        }
        // print(suf);
        ll ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,pre[i]+suf[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}