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
        vector<int> pi(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            pi[i]=v[i];
            mp[v[i]]=i;
        }
        sort(pi.rbegin(),pi.rend());
        string s;
        cin>>s;
        vector<int> v_1,v_0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                v_1.push_back(v[i]);
            }
            else{
                v_0.push_back(v[i]);
            }
        }
        sort(v_1.rbegin(),v_1.rend());
        sort(v_0.rbegin(),v_0.rend());
        for(auto val:v_0){
            v_1.push_back(val);
        }
        for(int i=0;i<n;i++){
            v[mp[v_1[i]]]=pi[i];
        }
        print(v);
    }
    return 0;
}