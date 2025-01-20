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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> even,odd;
        for(int i=0;i<n;i++){
            if(v[i]%2==0) even.push_back(v[i]);
            else odd.push_back(v[i]);
        }
        vector<int> rea=even;
        for(int i=0;i<odd.size();i++){
            rea.push_back(odd[i]);
        }
        ll sum=0,ans=0;
        for(int i=0;i<n;i++){
            sum+=rea[i];
            if(sum%2==0){
                ans++;
                while(sum%2==0){
                    sum/=2;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}