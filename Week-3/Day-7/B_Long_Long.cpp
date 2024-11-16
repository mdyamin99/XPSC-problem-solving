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
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=abs(v[i]);
        }
        ll r=0,cnt=0;
        bool flag=false;
        while(n>r){
            if(v[r]<0){
                flag=true;
            }
            if(flag){
                if(r==n-1 || v[r]>0){
                    cnt++;
                    flag=false;
                }
            }
            r++;
        }
        cout<<sum<<" "<<cnt<<endl;
    }
    return 0;
}