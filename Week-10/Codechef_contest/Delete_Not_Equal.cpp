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
        string s;
        cin>>s;
        int cnt1=0,cnt0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnt1++;
            else cnt0++;
        }
        if(cnt1==0 || cnt0==0) cout<<s.size()<<endl;
        else cout<<'1'<<endl;
    }
    return 0;
}