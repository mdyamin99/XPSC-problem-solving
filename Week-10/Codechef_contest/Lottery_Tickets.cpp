#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;
const int xx=1e6;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        deque<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int f_val=v[0];
        sort(all(v));
        if(f_val==v.front()) cout<<f_val+(v[1]-f_val)/2<<endl;
        else if(f_val==v.back()) cout<<xx-f_val+1+(f_val-v[n-2])/2<<endl;
        else{
            int x=0,y=0;
            for(int i=0;i<n;i++){
                if(v[i]==f_val){
                    x=f_val-(f_val-v[i-1])/2;
                    y=f_val+(v[i+1]-f_val)/2;
                }
            }
            cout<<(y-x)+1<<endl;
        }
    }
    return 0;
}