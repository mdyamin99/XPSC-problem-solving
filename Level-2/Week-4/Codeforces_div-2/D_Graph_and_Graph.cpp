#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;
const ll inf=LLONG_MAX;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,s1,s2,m1;
        cin>>n>>s1>>s2>>m1;
        vector<vector<int>> gp11(n+1);
        for(int i=0;i<m1;i++){
            int u,v;
            cin>>u>>v;
            gp11[u].push_back(v);
            gp11[v].push_back(u);
        }
        int m2;
        cin>>m2;
        vector<vector<int>> gp22(n+1);
        for(int i=0;i<m2;i++){
            int u,v;
            cin>>u>>v;
            gp22[u].push_back(v);
            gp22[v].push_back(u);
        }
        vector<bool> ok(n+1,0);
        for(int i=1;i<=n;i++){
            set<int> st(gp22[i].begin(),gp22[i].end());
            for(int val:gp11[i]){
                if(st.count(val)){
                    ok[i]=1;
                    break;
                }
            }
        }
        vector<vector<ll>> diss(n+1,vector<ll>(n+1,inf));
        diss[s1][s2]=0;
        priority_queue<tuple<ll,ll,ll>,vector<tuple<ll,ll,ll>>,greater<>> prq;
        prq.push({0,s1,s2});
        ll anss=-1;
        while(!prq.empty()){
            auto [val,u,v]=prq.top();
            prq.pop();
            if(val!=diss[u][v]) continue;
            if(v==u && ok[u]){
                anss=val; break;
            }
            for(int numu:gp11[u]){
                for(int numv:gp22[v]){
                    ll numval=val+abs(numu-numv);
                    if(numval<diss[numu][numv]){
                        diss[numu][numv]=numval;
                        prq.push({numval,numu,numv});
                    }
                }
            }
        }
        cout<<anss<<endl;
    }
    return 0;
}