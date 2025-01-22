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
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int leng=r-l+1;
        int st=l;
        if(l>0) st--;
        leng=min(leng,r);
        leng=min(leng,n-st);
        vector<int> lp,rp;
        for(int i=0;i<r;i++){
            lp.push_back(v[i]);
        }
        for(int i=st;i<n;i++){
            rp.push_back(v[i]);
        }
        sort(all(lp));
        sort(all(rp));
        ll sum1=0,sum2=0;
        for(int i=0;i<leng;i++){
            if(i<lp.size()){
                sum1+=lp[i];
            }
            if(i<rp.size()){
                sum2+=rp[i];
            }
        }
        cout<<min(sum1,sum2)<<endl;
    }
    return 0;
}