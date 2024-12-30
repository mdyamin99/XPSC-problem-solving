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

    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<ll,ll> mp;
    ll cnt=0,r=0;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
        while(mp.size()>x){
            mp[v[r]]--;
            if(mp[v[r]]==0){
                mp.erase(v[r]);
            }
            r++;
        }
        cnt+=(i-r+1);
    }
    cout<<cnt<<endl;
    return 0;
}