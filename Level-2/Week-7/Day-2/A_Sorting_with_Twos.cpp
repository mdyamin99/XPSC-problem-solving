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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool flag=true;
        int cnt=0,p;
        for(int i=1;i<=n;){
            p=(1<<cnt);
            vector<int> v2;
            while(i<=p && i<=n){
                v2.push_back(v[i-1]);
                i++;
            }
            for(int j=1;j<v2.size();j++){
                if(v2[j-1]>v2[j]){
                    flag=false;
                    break;
                }
            }
            cnt++;
            if(!flag) break;
        }
        if(flag) yes;
        else no;
    }
    return 0;
}