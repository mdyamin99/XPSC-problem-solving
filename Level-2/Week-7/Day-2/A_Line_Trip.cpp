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

    int tt;
    cin>>tt;
    while(tt--){
        int n,x;
        cin>>n>>x;
        vector<int> v(n+1);
        v.push_back(0);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int ans=(x-v[n])*2;
        for(int i=0;i<n;i++){
            ans=max(ans,v[i+1]-v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}