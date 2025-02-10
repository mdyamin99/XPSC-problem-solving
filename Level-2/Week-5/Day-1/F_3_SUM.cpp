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
        vector<int> v;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(mp[x%10]==0) v.push_back(x%10);
            mp[x%10]++;
        }
        n=v.size();
        bool flag=false;
        if(mp[1]>=3) flag=true;
        for(int i=0;i<n;i++){
            if(mp[v[i]]>=2){
                for(int j=0;j<n;j++){
                    if(v[i]==v[j]) continue;
                    if(((2*v[i])+v[j])%10==3){
                        flag=true;
                    }
                }
            }
        }
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if((v[i]+v[j]+v[k])%10==3){
                        flag=true;
                        break;
                    }
                }
            }
        }
        if(flag) yes;
        else no;
    }
    return 0;
}