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
        string s;
        cin>>s;
        int x=s[0]-'a',y=(s[1]-'0')-1;
        int l=x,m=y;
        // cout<<char(x+'a');
        x++;
        while(x<8){
            cout<<char(x+'a')<<y+1<<endl;
            x++;
        }
        x=l;
        x--;
        while(x>-1){
            cout<<char(x+'a')<<y+1<<endl;
            x--;
        }
        x=l;
        while(y>0){
            cout<<char(x+'a')<<y<<endl;
            y--;
        }
        y=m;
        y++;
        while(y<8){
            cout<<char(x+'a')<<y+1<<endl;
            y++;
        }

    }
    return 0;
}