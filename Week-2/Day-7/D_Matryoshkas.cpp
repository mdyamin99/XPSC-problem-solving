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
        multiset<int> ml;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ml.insert(x);
            mp[x]++;
        }
        int ans=0;
        for(auto val:ml){
            if(mp[val]>0){
                ans++;
                while(mp[val]>0){
                    mp[val]--;
                    val++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}