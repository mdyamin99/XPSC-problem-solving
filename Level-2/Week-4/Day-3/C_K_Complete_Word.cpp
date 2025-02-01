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
        int ans=0;
        for(int i=0;i<k/2;i++){
            int cnt[26]={};
            for(int j=0;j+k-1<n;j+=k){
                int i1=j+i;
                int i2=j+(k-1-i);
                cnt[s[i1]-'a']++;
                cnt[s[i2]-'a']++;
            }
            int req=2*(n/k);
            int mx=*max_element(cnt,cnt+26);
            ans+=req-mx;
        }
        if(k%2==1){
            int cnt[26]={};
            for(int i=k/2;i<n;i+=k){
                cnt[s[i]-'a']++;
            }
            int req=n/k;
            int mx=*max_element(cnt,cnt+26);
            ans+=req-mx;
        }
        cout<<ans<<endl;
    }
    return 0;
}