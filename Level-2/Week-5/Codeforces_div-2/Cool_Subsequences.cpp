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
        vector<int> v(n),ans;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            if(mp[v[i]]>1){
                cout<<1<<endl<<v[i]<<endl;
                flag=false;
                break;
            }
        }
        if(flag) cout<<-1<<endl;
    }
    return 0;
}