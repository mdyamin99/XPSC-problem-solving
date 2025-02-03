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
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b]--;
    }
    int ans=0,cnt=0;
    for(auto [x,y]:mp){
        cnt+=y;
        if(cnt>ans) ans=cnt;
    }
    cout<<ans<<endl;
    return 0;
}