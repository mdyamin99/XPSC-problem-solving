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
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(all(v),greater<int>());
        ll ans=v[0]+1;
        for(int i=0;i<n-1;i++){
            ans+=v[i]+1;
        }
        if(ans<=m) yes;
        else no;
    }
    return 0;
}