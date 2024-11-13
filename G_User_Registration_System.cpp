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
    map<string,int> mp;
    map<string,int> mpp;
    while(t--){
        char c;
        cin>>c;
        if(c=='a'){
            string s;
            cin>>s;
            if(!mp.count(s)){
                mp[s]++;
                cout<<"OK"<<endl;
            }
            else{
                mpp[s]++;
                char sz = '0'+mpp[s];
                mp[s+sz]++;
                mpp[s+sz]++;
                cout<<s+sz<<endl;
            }
        }
        else{
            string s;
            cin>>s;
            if(mp.count(s)){
                mp.erase(s);
                cout<<"DELETED"<<endl;
                if(mpp.count(s)){
                    mpp.erase(s);
                }
            }
            else{
                cout<<"INVALID"<<endl;
            }
        }
    }
    return 0;
}