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

    int n,k,q;
    cin>>n>>k>>q;
    vector<int> pre(200005);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        pre[a]++;
        pre[b+1]--;
    }
    for(int i=1;i<200005;i++){
        pre[i]=pre[i-1]+pre[i];
    }
    for(int i=0;i<200005;i++){
        if(pre[i]>=k) pre[i]=1;
        else pre[i]=0;
    }
    for(int i=1;i<200005;i++){
        pre[i]=pre[i-1]+pre[i];
    }
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<pre[y]-pre[x-1]<<endl;
    }
    return 0;
}