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
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<ll,int> mp;
    mp[0]=1;
    ll cnt=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(mp.count(sum-x)){
            cnt++;
        }
        mp[sum]=1;
    }
    cout<<cnt<<endl;
    return 0;
}