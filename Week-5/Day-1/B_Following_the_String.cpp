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
        map<char,int> mp;
        for(char i='a';i!='{';i++){
            mp[i]=0;
        }
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            for(auto [x,y]:mp)
            {
                if(a==y){
                    cout<<x;
                    mp[x]++;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}