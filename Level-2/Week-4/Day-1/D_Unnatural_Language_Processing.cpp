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
        for(int i=0;i<n;i++){
            if(s[i]=='b' || s[i]=='c' || s[i]=='d') cout<<s[i];
            else{
                cout<<s[i];
                if(s[i+1]=='b' || s[i+1]=='c' || s[i+1]=='d'){
                    if(s[i+2]!='a' && s[i+2]!='e'){
                        cout<<s[i+1];
                        i++;
                    }
                }
                if(n-1!=i) cout<<'.';
            }
        }
        cout<<endl;
    }
    return 0;
}