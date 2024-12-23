#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
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
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int mx1=INT_MIN;
            if(i+1 < n){
                int x=abs(v[i]-v[i+1]);
                mx1=max(mx1,x);
            }
            if(i-1 >= 0){
                int x=abs(v[i]-v[i-1]);
                mx1=max(mx1,x);
            }
            ans=min(ans,mx1);
        }
        cout<<ans<<endl;
    }
    return 0;
}