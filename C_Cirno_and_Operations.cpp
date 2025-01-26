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
        vector<ll> v(n);
        ll m_sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            m_sum+=v[i];
        }
        if(n==1) cout<<v[0]<<endl;
        else{
            for(int i=1;i<n;i++){
                vector<ll> ct=v;
                for(int j=0;j<i;j++){
                    if(ct.size()==1) break;
                    if(ct[0]>ct.back()) reverse(all(ct));
                    vector<ll> d;
                    for(int x=0;x<ct.size()-1;x++){
                        d.push_back(ct[x+1]-ct[x]);
                    }
                    ct=d;
                }
                ll sum=0;
                for(auto xx:ct) sum+=xx;
                if(sum>m_sum) m_sum=sum;
            }
            cout<<m_sum<<endl;
        }
    }
    return 0;
}