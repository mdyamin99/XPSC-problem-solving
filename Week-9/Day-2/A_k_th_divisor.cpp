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
    vector<ll> ans;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ans.push_back(i);
            if(n/i != i) ans.push_back(n/i);
        }
    }
    sort(all(ans));
    if(ans.size()<k) cout<<"-1"<<endl;
    else cout<<ans[k-1]<<endl;
    return 0;
}