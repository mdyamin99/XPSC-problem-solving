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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        string s;
        cin>>s;
        int l=0,r=0;
        for(int i=0;i<n;i++){
            l=i,r=i;
            if(s[i]=='L') break;
        }
        ll sum=0,ans=0;
        while(n>r){
            if(s[r]=='L'){
                sum=0;
                for(int i=r;s[i] != 'R';i++){
                    sum+=v[i];
                }
            }
            if(s[r]=='R'){
                ans+=sum;
            }
            r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}