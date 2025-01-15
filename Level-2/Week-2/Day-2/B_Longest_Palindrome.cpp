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

    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    set<string> f,l;
    string mid="";
    string nn=s[0];
    reverse(all(nn));
    if(nn==s[0]){
        mid=s[0];
    }
    f.insert(s[0]);
    for(int i=1;i<n;i++){
        string x=s[i];
        reverse(all(x));
        if(x==s[i]){
            if(mid.size()<x.size()){
                mid=x;
            }
        }
        else if(f.find(x) != f.end()){
            l.insert(s[i]);
        }
        else f.insert(s[i]);
    }
    vector<string> ans,anss;
    for(auto x:l){
        reverse(all(x));
        ans.push_back(x);
    }
    ans.push_back(mid);
    for(auto x:l){
        anss.push_back(x);
    }
    reverse(all(anss));
    for(int i=0;i<anss.size();i++){
        ans.push_back(anss[i]);
    }
    string xx;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            xx.push_back(ans[i][j]);
        }
    }
    cout<<xx.size()<<endl;
    cout<<xx<<endl;
    return 0;
}