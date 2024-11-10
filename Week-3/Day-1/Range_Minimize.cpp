#include<iostream>
#include<vector>
#include<algorithm>
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
        sort(all(v));
        int a=v[n-1]-v[2], b=v[n-2]-v[1], c=v[n-3]-v[0];
        int mn=min({a,b,c});
        cout<<mn<<endl;
    }
    return 0;
}