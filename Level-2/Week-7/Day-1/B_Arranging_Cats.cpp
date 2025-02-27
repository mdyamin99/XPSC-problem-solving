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
        string a,b;
        cin>>a>>b;
        int cnt1=0,cnt0=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1' && b[i]=='0') cnt0++;
            else if(a[i]=='0' && b[i]=='1') cnt1++;
        }
        cout<<max(cnt0,cnt1)<<endl;
    }
    return 0;
}