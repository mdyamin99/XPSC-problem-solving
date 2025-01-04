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
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n+1,0);

        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        vector<ll> pre(n+2);
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+v[i];
        }
        vector<pair<ll,int>> x(q);
        for(int i=0;i<q;i++){
            cin>>x[i].first;
            x[i].second=i;
        }
        sort(all(x));
        int cnt=0;
        vector<ll> ans(q);
        for(int i=0;i<q;i++){
            while(true){
                if(cnt==n || v[cnt+1]>x[i].first) break;
                cnt++;
            }
            ans[x[i].second]=pre[cnt];
        }
        print(ans);
    }
    return 0;
}