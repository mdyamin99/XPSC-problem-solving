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
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        ll sum=a+b+c;
        if(m>=sum) cout<<sum<<endl;
        else{
            ll ans=0;
            if(m>=a) ans+=a;
            else ans+=m;
            if(m>=b) ans+=b;
            else ans+=m;
            if(2*m-ans>=c) ans+=c;
            else ans+=(2*m)-ans;
            cout<<ans<<endl;
        }
    }
    return 0;
}