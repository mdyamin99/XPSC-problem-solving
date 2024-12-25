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
        if(n==1) cout<<1<<endl;
        else if(n<4) cout<<2<<endl;
        else{
            ll ans=2,cnt=4;
            while(true){
                if(cnt>=n){
                    break;
                }
                cnt+=1;
                cnt*=2;
                ans++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}