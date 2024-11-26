#include<iostream>
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
        int n,x,y;
        cin>>n>>x>>y;
        ll ans=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(x*a<=y) ans+=x*a;
            else ans+=y;
        }
        cout<<ans<<endl;
    }
    return 0;
}