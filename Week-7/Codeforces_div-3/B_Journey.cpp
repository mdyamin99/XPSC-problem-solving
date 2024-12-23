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
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        vector<int> v={a,b,c};
        ll sum=a+b+c;
        ll f_sum=n/sum;
        ll c_sum=sum*f_sum;
        ll ans=f_sum*3;
        for(int i=0;i<3;i++){
            if(c_sum<n){
                c_sum+=v[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}