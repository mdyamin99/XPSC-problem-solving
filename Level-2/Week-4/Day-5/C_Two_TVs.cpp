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
    map<int,int> mp;
    bool flag=true;
    while(t--){
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b+1]--;
    }
    int sum=0;
    for(auto [x,y]:mp){
        sum+=y;
        if(sum>2){
            flag=false;
            break;
        }
    }
    if(flag) yes;
    else no;
    return 0;
}