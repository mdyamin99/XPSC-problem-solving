#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

bool flag(int u,const vector<vector<int>> &x,vector<bool> &y,vector<int> &z){
    for(int i : x[u]){
        if(!y[i]){
            y[i]=true;
            if(z[i]==-1 || flag(z[i],x,y,z)){
                z[i]=u;
                return true;
            }
        }
    }
    return false;
}
vector<int> a(int n,int k){
    vector<int> vv(n+1,-1);
    vector<vector<int>> x(n+1);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (j % k != i % k){
                x[i].push_back(j);
            }
        }
    }
    int mat=0;
    for (int i=1;i<=n;i++){
        vector<bool> v(n+1,false);
        if (flag(i,x,v,vv)){
            mat++;
        }
    }
    if (mat<n){
        return {};
    }
    vector<int> result(n);
    for (int i=1;i<=n;i++){
        if (vv[i]!=-1){
            result[vv[i]-1]=i;
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> ans = a(n,k);
        if(ans.empty()){
            cout<<-1<<endl;
        } else{
            for(int x:ans) {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}