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
        int n,m,q;
        cin>>n>>m>>q;
        multiset<int> ml;
        while(m--){
            int x;
            cin>>x;
            ml.insert(x);
        }
        while(q--){
            int x;
            cin>>x;
            if(x<*ml.begin()){
                cout<<*ml.begin()-1<<endl;
            }
            else if(x>*ml.rbegin()){
                cout<<n-*ml.rbegin()<<endl;
            }
            else{
                auto r=ml.lower_bound(x);
                auto l=r;
                l--;
                int mid=(*r+*l)/2;
                cout<<min(mid-*l,*r-mid)<<endl;
            }
        }
    }
    return 0;
}