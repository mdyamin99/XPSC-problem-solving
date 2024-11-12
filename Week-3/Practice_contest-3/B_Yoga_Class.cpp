#include<iostream>
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
        int n,x,y;
        cin>>n>>x>>y;
        int ans1=0,ans2=0;
        if(n%2==0){
            ans1=n*x;
            ans2=(n/2)*y;
            cout<<max(ans1,ans2)<<endl;
        }
        else{
            ans1=n*x;
            ans2=(n/2)*y+x;
            cout<<max(ans1,ans2)<<endl;
        }
    }
    return 0;
}