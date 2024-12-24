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
        string s;
        cin>>s;
        int a_cnt=0,b_cnt=0,c_cnt=0,d_cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') a_cnt++;
            else if(s[i]=='B') b_cnt++;
            else if(s[i]=='C') c_cnt++;
            else if(s[i]=='D') d_cnt++;
        }
        int ans=0;
        if(a_cnt>n) ans+=n;
        else ans+=a_cnt;
        if(b_cnt>n) ans+=n;
        else ans+=b_cnt;
        if(c_cnt>n) ans+=n;
        else ans+=c_cnt;
        if(d_cnt>n) ans+=n;
        else ans+=d_cnt;
        cout<<ans<<endl;
    }
    return 0;
}