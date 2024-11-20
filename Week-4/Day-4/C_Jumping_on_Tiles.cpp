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
        string s;
        cin>>s;
        int n=s.size();
        map<char,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[s[i]].push_back(i+1);
        }
        if(s[0]<s[n-1]){
            int cost=s[n-1]-s[0];
            vector<int> v;
            for(int i=0;s[0]+i<=s[n-1];i++){
                char c=s[0]+i;
                if(mp.count(c)){
                    for(auto x:mp[c]){
                        v.push_back(x);
                    }
                }
            }
            cout<<cost<<" "<<v.size()<<endl;
            print(v);
        }
        else if(s[0]>s[n-1]){
            int cost=s[0]-s[n-1];
            vector<int> v;
            for(int i=0;s[0]+i>=s[n-1];i--){
                char c=s[0]+i;
                if(mp.count(c)){
                    for(auto x:mp[c]){
                        v.push_back(x);
                    }
                }
            }
            cout<<cost<<" "<<v.size()<<endl;
            print(v);
        }
        else{
            cout<<'0'<<" "<<mp[s[0]].size()<<endl;
            for(auto x:mp[s[0]]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}