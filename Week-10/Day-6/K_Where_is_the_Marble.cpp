#include<iostream>
#include<vector>
#include<algorithm>
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

    int cnt=1;
    while(true){
        int n,q;
        cin>>n>>q;
        if(n==0 || q==0) break;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(all(v));
        cout<<"CASE# "<<cnt<<":"<<endl;
        cnt++;
        while(q--){
            int x;
            cin>>x;
            int l=0,r=n-1;
            int ans=0;
            while(l<=r){
                int mid=(r+l)/2;
                if(v[mid]==x){
                    ans=mid+1;
                    r=mid-1;
                }
                else if(v[mid]>x){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            if(ans==0) cout<<x<<" not found"<<endl;
            else cout<<x<<" found at "<<ans<<endl;
        }
    }
    return 0;
}