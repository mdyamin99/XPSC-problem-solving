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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> bits(31);
        for(int i=0;i<n;i++){
            for(int j=30;j>=0;j--){
                if((v[i]>>j)&1){
                    bits[j]++;
                }
            }
        }
        int ans=0;
        for(int i=30;i>=0;i--){
            if(bits[i]==n){
                ans+=(1LL << i);
            }
            else{
                int need=n-bits[i];
                if(need<=k){
                    ans+=(1LL << i);
                    k-=need;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}