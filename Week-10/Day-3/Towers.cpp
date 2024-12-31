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

    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    ll cnt=0;
    set<pair<int,int>> st;
    for(int i=0;i<n;i++){
        set<pair<int,int>>::iterator it=st.upper_bound(v[i]);
        if(it != st.end()){
            st.erase(it);
        }
        else cnt++;
        st.insert(v[i]);
    }
    cout<<cnt<<endl;
    return 0;
}