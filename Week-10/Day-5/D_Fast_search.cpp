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

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        auto itx=lower_bound(all(v),x);
        auto ity=upper_bound(all(v),y);
        cout<<ity-itx<<" ";
    }
    return 0;
}