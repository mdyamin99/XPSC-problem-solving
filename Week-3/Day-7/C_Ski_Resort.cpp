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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll r=0,cnt=0,ans=0;
        bool flag=false;
        while(n>r){
            if(v[r]<=q){
                cnt++;
                flag=true;
            }
            if(flag){
                if(v[r]>q || r==n-1){
                    if(cnt>=k){
                        ll cons=(cnt-k)+1;
                        ans+=(cons*(cons+1))/2;
                    }
                    flag=false;
                    cnt=0;
                }
            }
            r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}