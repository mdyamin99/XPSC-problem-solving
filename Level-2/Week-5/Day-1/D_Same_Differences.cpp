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
        map<int,int> mp;
        ll ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ans+=mp[x-i];
            mp[x-i]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}