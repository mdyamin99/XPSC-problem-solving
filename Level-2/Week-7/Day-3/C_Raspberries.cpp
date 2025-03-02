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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=INT_MAX,even=0;
        for(int i=0;i<n;i++){
            if(v[i]%2==0) even++;
            if(v[i]%m==0){
                ans=0;
            }
            else{
                int cnt=0;
                while(true){
                    if(v[i]%m != 0){
                        cnt++;
                        v[i]++;
                    }
                    else{
                        ans=min(ans,cnt);
                        break;
                    }
                }
            }
        }
        if(m==4){
            if(even>=2) ans=0;
            else if(even==1) ans=min(ans,1);
            else ans=min(ans,2);
        }
        cout<<ans<<endl;
    }
    return 0;
}