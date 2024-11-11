#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
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
        int n,m,h;
        cin>>n>>m>>h;
        vector<ll> vn(n),vm(m);

        for(int i=0;i<n;i++){
            cin>>vn[i];
        }
        for(int i=0;i<m;i++){
            cin>>vm[i];
        }
        sort(all(vn),greater<ll>());
        sort(all(vm),greater<ll>());
        ll ans=0;
        for(int i=0;i<min(n,m);i++){
            ll x=vm[i]*h;
            if(x>=vn[i]){
                ans+=vn[i];
            }
            else{
                ans+=x;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}