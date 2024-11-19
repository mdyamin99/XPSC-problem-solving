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
        string s;
        cin>>s;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(i+3<n && s[i+3]=='0'){
                v.push_back(s[i]-'0');
            }
            else if(i+2<n && s[i+2]=='0'){
                int x=s[i]-'0';
                int y=s[i+1]-'0';
                v.push_back((x*10)+y);
                i+=2;
            }
            else{
                v.push_back(s[i]-'0');
            }
        }
        for(auto val:v){
            cout<<char(96+val);
        }
        cout<<endl;
    }
    return 0;
}