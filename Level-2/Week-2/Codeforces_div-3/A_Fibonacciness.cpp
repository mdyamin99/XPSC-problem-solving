#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

int ok(int a,int b,int c,int d,int x){
    int cnt=0;
    if(x==a+b) cnt++;
    if(c==b+x) cnt++;
    if(d==x+c) cnt++;
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans=0;
        int x=a+b;
        ans=ok(a,b,c,d,x);
        x=c-b;
        int anss=ok(a,b,c,d,x);
        if(anss>ans) ans=anss;
        x=d-c;
        anss=ok(a,b,c,d,x);
        if(anss>ans) ans=anss;
        cout<<ans<<endl;
    }
    return 0;
}