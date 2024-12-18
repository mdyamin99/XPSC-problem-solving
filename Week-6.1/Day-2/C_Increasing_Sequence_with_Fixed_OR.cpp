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
        ll n;
        cin>>n;
        deque<ll> ans;
        ll x=__lg(n);
        for(int i=0;i<=x;i++){
            if((n>>i)&1){
                ll val=n-(1LL << i);
                if(val>0) ans.push_front(val);
            }
        }
        ans.push_back(n);
        cout<<ans.size()<<endl;
        print(ans);
    }
    return 0;
}