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
        int n,m;
        string s;
        cin>>n>>m>>s;
        set<int> st;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            st.insert(x);
        }
        string c;
        cin>>c;
        sort(all(c));
        int x=0;
        for(auto v:st){
            s[v-1]=c[x];
            x++;
        }
        cout<<s<<endl;
    }
    return 0;
}