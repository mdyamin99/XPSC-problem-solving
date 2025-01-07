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
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]) flag=false;
        }
        if(flag) yes;
        else{
            vector<int> ans;
            int l=0;
            for(int i=0;i<n;i++){
                if(v[i]/10>=l && v[i]/10<=v[i]%10){
                    ans.push_back(v[i]/10);
                    ans.push_back(v[i]%10);
                    l=v[i]%10;
                }
                else{
                    ans.push_back(v[i]);
                    l=v[i];
                }
            }
            // print(ans);
            bool flg=true;
            for(int i=0;i<ans.size()-1;i++){
                if(ans[i]>ans[i+1]){
                    flg=false;
                    break;
                }
            }
            if(flg) yes;
            else no;
        }
    }
    return 0;
}