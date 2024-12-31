#include<iostream>
#include<vector>
#include<algorithm>
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
        vector<int> vv=v;
        sort(all(v));
        sort(all(vv),greater<int>());
        ll ans=0;
        for(int i=0;i<n/2;i++){
            ans+=vv[i]-v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}