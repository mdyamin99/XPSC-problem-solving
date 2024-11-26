#include<iostream>
#include<string>
#include<algorithm>
#include<limits.h>
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
        string s,k;
        cin>>s>>k;

        int ans=INT_MAX;
        for(int i=0;i<=n-m;i++){
            int x=0;
            for(int j=0;j<m;j++){
                int y=0;
                y+=abs(int(s[i+j])-int(k[j]));
                x+=min(y,10-y);
            }
            ans=min(ans,x);
        }
        cout<<ans<<endl;
    }
    return 0;
}