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

    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    map<int,int> mp;
    int cnt=0;
    ll count=0;
    int r=0;
    for (int l=0;l<n;l++) {
        while(r<n) {
            if(mp[a[r]]==0 && cnt==k) {
                break;
            }
            if(mp[a[r]]==0) {
                cnt++;
            }
            mp[a[r]]++;
            r++;
        }
        count+=(r-l);
        mp[a[l]]--;
        if (mp[a[l]]==0) {
            cnt--;
        }
    }
    cout<<count<<endl;
    return 0;
}