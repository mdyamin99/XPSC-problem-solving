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
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll gcd1=0,gcd2=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                gcd1=__gcd(gcd1,v[i]);
            }
            else{
                gcd2=__gcd(gcd2,v[i]);
            }
        }
        bool flag1=true,flag2=true;
        for(int i=1;i<n;i+=2){
            if(v[i]%gcd1==0){
                flag1=false;
                break;
            }
        }
        for(int i=0;i<n;i+=2){
            if(v[i]%gcd2==0){
                flag2=false;
                break;
            }
        }
        if(!flag1 && !flag2) cout<<"0"<<endl;
        else if(flag1) cout<<gcd1<<endl;
        else cout<<gcd2<<endl;
    }
    return 0;
}