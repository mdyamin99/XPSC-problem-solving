#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

int ar[205][205];
int fun(int i,int j,int n,int m){
    int ans=0;
    int x=i,y=j;
    while(true){
        ans+=ar[x][y];
        x++,y++;
        if(x==n || y==m) break;
    }
    x=i,y=j;
    while(true){
        ans+=ar[x][y];
        x++,y--;
        if(x==n || y==-1) break;
    }
    ans-=ar[i][j];
    x=i,y=j;
    while(true){
        ans+=ar[x][y];
        x--,y++;
        if(x==-1 || y==m) break;
    }
    ans-=ar[i][j];
    x=i,y=j;
    while(true){
        ans+=ar[x][y];
        x--,y--;
        if(x==-1 || y==-1) break;
    }
    ans-=ar[i][j];
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ar[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans=max(ans,fun(i,j,n,m));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}