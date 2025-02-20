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
        int n;
        cin>>n;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        bool flag=false;
        for(int i=2;i<=n;i++){
            if(v[1]!=v[i]){
                flag=true;
                break;
            }
        }
        if(flag){
            int type=-1;
            yes;
            for(int i=2;i<=n;i++){
                if(v[1]!=v[i]){
                    cout<<1<<" "<<i<<endl;
                    type=i;
                }
            }
            for(int i=2;i<=n;i++){
                if(v[1]==v[i]){
                    cout<<type<<" "<<i<<endl;
                }
            }
        }
        else no;
    }
    return 0;
}