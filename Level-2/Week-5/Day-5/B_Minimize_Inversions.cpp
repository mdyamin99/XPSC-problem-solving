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
        vector<pair<int,int>> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(all(a));
        for(int i=0;i<n;i++){
            cout<<a[i].first<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<b[a[i].second]<<" ";
        }
        cout<<endl;
    }
    return 0;
}