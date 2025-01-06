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
        if(n==1) no;
        else{
            ll sum=0,v_sum=0;
            for(int i=0;i<n;i++){
                v_sum+=v[i];
                if(v[i]==1) sum+=2;
                else sum+=1;
            }
            if(sum<=v_sum) yes;
            else no;
        }
    }
    return 0;
}