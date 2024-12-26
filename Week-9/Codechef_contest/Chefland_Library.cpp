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
        map<int,int> mp;
        ll ans=0;
        for(int i=n-1;i>=0;i--){
            if(!mp.count(v[i])){
                ans+=i+1;
            }
            mp[v[i]]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}