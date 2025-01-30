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
        int m,k;
        cin>>m>>k;
        string s;
        cin>>s;
        vector<int> pre(m);
        if(s[0]=='S') pre[0]=1;
        else pre[0]=0;
        for(int i=1;i<m;i++){
            if(s[i]=='S') pre[i]=pre[i-1]+1;
            else pre[i]=pre[i-1]+0;
        }
        int n=0;
        if(m>=2){
            for(int i=0;i<n;i++){
                int x=k-pre[i]+i+1;
                if(x>n) n=x;
            }
        }
        else{
            n=m;
        }
        int m_n=m+k-pre[m-1]-1;
        int ans=0;
        if(m_n>=max(n,m)) ans=m_n;
        else ans=m;
        cout<<ans<<endl;
    }
    return 0;
}