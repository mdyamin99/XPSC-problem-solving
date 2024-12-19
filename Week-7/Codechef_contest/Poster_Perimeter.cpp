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
        int n,m,k;
        cin>>n>>m>>k;
        int ans=INT_MAX;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int x=(i+j)*2;
                int dif=abs(x-k);
                ans=min(ans,dif);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}