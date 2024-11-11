#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
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
    map<string,int> mp;
    vector<string> v;
    while(t--){
        string s;
        cin>>s;
        v.push_back(s);
    }
    reverse(all(v));
    vector<char> ans;
    for(auto x:v){
        mp[x]++;
        if(mp[x]==1){
            ans.push_back(x[x.size()-2]);
            ans.push_back(x[x.size()-1]);
        }
    }
    for(auto c:ans){
        cout<<c;
    }
    return 0;
}