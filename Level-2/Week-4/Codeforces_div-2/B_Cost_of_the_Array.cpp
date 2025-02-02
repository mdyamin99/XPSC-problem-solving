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
        int n,k;
        cin>>n>>k;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        if(n==k){
            int anss=-100;
            for(int i=2;i<=n;i+=2){
                if(v[i]!=i/2){
                    anss=i/2;
                    break;
                }
            }
            if(anss==-100) anss=n/2+1;
            cout<<anss<<endl;
        }
        else{
            int idx=-100;
            for(int i=2;i<=n-k+2;i++){
                if(v[i]!=1){
                    idx=i;
                    break;
                }
            }
            if(idx==-100){
                int ccr=2;
                for(int i=n-k+1;i<=n;i+=2){
                    if(v[i]!=ccr) break;
                    ccr++;
                }
                cout<<ccr<<endl;
            }
            else cout<<"1"<<endl;
        }
    }
    return 0;
}