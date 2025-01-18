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
    int ans=0;
    for(int i=2;i<=n;i++){
        int x=i;
        for(int j=2;j*j<=i;j++){
            while(x%j==0){
                mp[j]++;
                x/=j;
            }
        }
        if(x>1) mp[x]++;
        if(mp.size()==2) ans++;
        mp.erase(all(mp));
    }
    cout<<ans<<endl;
    return 0;
}