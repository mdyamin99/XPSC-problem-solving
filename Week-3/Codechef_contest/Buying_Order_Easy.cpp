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
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int cnt=0;
        for(int i=1;i<n;i++){
            if(v[i]==1) cnt++;
        }
        int cntt=0;
        for(int i=2;i<=n;i++){
            if(v[i]==0) cnt++;
        }
        int mn = min(cnt+cntt,n-1);
        cout<<mn+n<<endl;
    }
    return 0;
}