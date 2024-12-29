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

    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    vector<char> ans;
    int cnt=0;
    string mid="";
    for(auto [c,v]:mp){
        if(v%2==0){
            for(int i=0;i<v/2;i++){
                ans.push_back(c);
            }
        }
        else{
            cnt++;
            for(int i=0;i<v;i++){
                mid+=c;
            }
        }
    }
    if(cnt>1) cout<<"NO SOLUTION"<<endl;
    else{
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<mid;
        for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}