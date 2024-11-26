#include<iostream>
#include<limits.h>
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
        int n,k;
        cin>>n>>k;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>=k) ans=min(ans,x%k);
        }
        if(ans==INT_MAX) cout<<"-1"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}