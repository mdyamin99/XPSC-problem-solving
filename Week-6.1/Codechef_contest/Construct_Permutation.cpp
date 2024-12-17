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
        if(n%2==0){
            cout<<"-1"<<endl;
            continue;
        }
        vector<int> a,b;
        for(int i=1;i<=n;i++){
            if(i%2==0) a.push_back(i);
            else b.push_back(i);
        }
        sort(all(a),greater<int>());
        int x=0,y=0;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans[i]=b[y];
                y++;
            }
            else{
                ans[i]=a[x];
                x++;
            }
        }
        print(ans);
    }
    return 0;
}