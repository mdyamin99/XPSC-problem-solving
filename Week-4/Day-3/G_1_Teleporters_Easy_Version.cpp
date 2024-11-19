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
        ll n,c;
        cin>>n>>c;
        vector<ll> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
            v[i]=v[i]+i;
        }
        sort(all(v));
        ll cnt=0,sum=0;
        for(int i=1;i<=n;i++){
            sum+=v[i];
            if(sum<=c){
                cnt++;
            }
            else{
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}