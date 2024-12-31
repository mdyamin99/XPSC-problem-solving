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

    int n,x;
    cin>>n>>x;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(all(v));
    for(int i=0;i<n;i++){
        ll xx=x-v[i].first;
        for(int j=i+1,k=n-1;j<k;j++){
            while(v[j].first+v[k].first>xx){
                k--;
            }
            if(j<k && v[j].first+v[k].first==xx){
                cout<<v[i].second<<" "<<v[j].second<<" "<<v[k].second<<endl;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}