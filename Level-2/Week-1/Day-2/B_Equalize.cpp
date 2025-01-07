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
        sort(all(v));
        v.erase(unique(all(v)),v.end());
        int mx=1;
        for(int i=0;i<n;i++){
            int x=v[i]+n-1;
            int it=upper_bound(all(v),x)-v.begin()-i;
            mx=max(it,mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}