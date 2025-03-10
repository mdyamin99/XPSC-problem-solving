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
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,v[i]-v[0]);
        }
        for(int i=0;i<n;i++){
            ans=max(ans,v[n-1]-v[i]);
        }
        for(int i=1;i<n;i++){
            ans=max(ans,v[i-1]-v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}