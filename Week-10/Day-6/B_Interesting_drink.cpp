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

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int l=0,r=n-1;
        int ans=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid]<=x){
                ans=mid+1;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}