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
        ll n,x;
        cin>>n>>x;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<ll> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=a[i]*b[i];
        }
        sort(all(ans),greater<ll>());
        ll cnt=0,an=0;
        for(int i=0;i<n;i++){
            cnt++;
            an+=ans[i];
            if(an>=x) break;
        }
        if(cnt==n) cout<<"-1"<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}