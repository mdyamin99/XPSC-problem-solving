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
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=0,dif=0;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                ans+=v[i]-v[i+1];
                dif=max(dif,v[i]-v[i+1]);
                v[i+1]=v[i];
            }
        }
        cout<<ans+dif<<endl;
    }
    return 0;
}