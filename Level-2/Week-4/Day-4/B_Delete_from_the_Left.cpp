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

    string s1,s2;
    cin>>s1>>s2;
    int ans=0;
    int l=min(s1.size(),s2.size());
    for(int i=l-1;i>=0;i--){
        if(s1.back()==s2.back()){
            s1.pop_back();
            s2.pop_back();
        }
        else break;
    }
    cout<<s1.size()+s2.size()<<endl;
    return 0;
}