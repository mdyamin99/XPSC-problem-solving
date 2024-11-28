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
        vector<int> v(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        ll x=(n+1)*100;
        ll pas=x/2;
        if(sum>=pas) cout<<'0'<<endl;
        else{
            if(pas-sum>100) cout<<"-1"<<endl;
            else cout<<pas-sum<<endl;
        }
    }
    return 0;
}