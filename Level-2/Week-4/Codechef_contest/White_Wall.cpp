#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;
vector<string> ok={"RGB","BGR","RBG","GBR","BRG","GRB"};

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
        int ans=INT_MAX;
        for(int i=0;i<6;i++){
            int cn=0;
            for(int j=0;j<n;j++){
                if(s[j]!=ok[i][j%3]) cn++;
            }
            ans=min(ans,cn);
        }
        cout<<ans<<endl;
    }
    return 0;
}