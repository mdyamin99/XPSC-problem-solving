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
        list<int> lt;
        vector<pair<int,int>> v;
        for(int i=1;i<=n;i++){
            lt.push_back(i);
        }
        for(int i=1;i<=n-1;i++){
            int x,y;
            x=lt.back();
            lt.pop_back();
            y=lt.back();
            lt.pop_back();
            v.push_back({x,y});
            lt.push_back(ceil(float(x+y)/2));
        }
        cout<<"2"<<endl;
        for(auto [x,y]:v){
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}