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
        ll ans=0;
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x!=0){
                pq.push(x);
            }
            else{
                if(!pq.empty()){
                    ans+=pq.top();
                    pq.pop();
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}