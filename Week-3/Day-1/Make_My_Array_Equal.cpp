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
        if(n==1){
            yes;
        }
        else{
            bool flag=false;
            for(int i=0;i<n-1;i++){
                if(v[i]==0){
                    continue;
                }
                else{
                    if(v[i] != v[i+1]){
                        flag=true;
                        break;
                    }
                }
            }
            if(flag) no;
            else yes;
        }
    }
    return 0;
}