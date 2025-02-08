#include<iostream>
#include<vector>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        pbds<int> p;
        for(int i=0;i<n;i++){
            cin>>v[i];
            p.insert(v[i]);
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            ans+=p.order_of_key(v[i]);
            p.erase(v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}