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
        vector<int> x;
        vector<bool> ok(n+1,false);
        for(int i=1;i<=n;i++){
            if(ok[i]==false){
                int l=0;
                int c=i;
                while(ok[c]==false){
                    ok[c]=true;
                    c=v[c];
                    l++;
                }
                x.push_back(l);
            }
        }
        if(x.size()==1){
            cout<<"0"<<endl;
        }
        else{
            priority_queue<int,vector<int>,greater<int>> p(all(x));
            ll cst=0;
            while(1<p.size()){
                int y=p.top();
                p.pop();
                int z=p.top();
                p.pop();
                p.push(y+z);
                cst+=z+y;
            }
            cout<<cst<<endl;
        }
    }
    return 0;
}