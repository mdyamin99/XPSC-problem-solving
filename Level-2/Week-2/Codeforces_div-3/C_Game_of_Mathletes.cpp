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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int ans=0;
        for(auto [x,y]:mp){
            int cm=k-x;
            if(x==cm){
                ans+=mp[x]/2;
            }
            else if(mp.find(cm)!=mp.end()){
                int pr=min(mp[x],mp[cm]);
                mp[x]-=pr;
                mp[cm]-=pr;
                ans+=pr;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}