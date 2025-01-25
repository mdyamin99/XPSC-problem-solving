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
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        int l=0,r=0,ans=0;
        while(l<n && r<m){
            if(s1[l]==s2[r]){
                ans++;
                l++;
            }
            r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}