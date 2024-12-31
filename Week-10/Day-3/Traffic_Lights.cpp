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

    int x,n;
    cin>>x>>n;
    multiset<int> l;
    set<int> p;
    p.insert(0);
    p.insert(x);
    l.insert(x);
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        p.insert(num);
        auto it=p.find(num);
        int pv=*prev(it);
        int nv=*next(it);
        l.erase(l.find(nv-pv));
        l.insert(num-pv);
        l.insert(nv-num);
        cout<<*l.rbegin()<<" ";
    }
    return 0;
}