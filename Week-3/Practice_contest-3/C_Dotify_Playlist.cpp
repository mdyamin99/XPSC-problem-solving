#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<set>
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
        int n,k,l;
        cin>>n>>k>>l;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(l==b) v.push_back(a);
        }
        if(v.size()<k) cout<<"-1"<<endl;
        else{
            sort(all(v),greater<int>());
            ll ans=0;
            for(int i=0;i<k;i++){
                ans+=v[i];
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}