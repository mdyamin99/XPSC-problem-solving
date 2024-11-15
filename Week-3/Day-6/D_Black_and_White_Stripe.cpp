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
        string s;
        cin>>s;
        int l=0,r=0,cnt=0;
        int ans=INT_MAX;
        while(n>r){
            if(s[r]=='W'){
                cnt++;
            }
            if(r-l+1==k){
                ans=min(ans,cnt);
                if(s[l]=='W') cnt--;
                l++;
            }
            r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}