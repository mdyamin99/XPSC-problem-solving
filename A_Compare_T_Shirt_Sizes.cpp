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
        string s1,s2;
        cin>>s1>>s2;
        int s1_cnt=0,s2_cnt=0;
        for(auto c:s1){
            if(c=='X') s1_cnt++;
        }
        for(auto c:s2){
            if(c=='X') s2_cnt++;
        }
        if(s1[s1.size()-1]=='S' && s2[s2.size()-1]=='S'){
            if(s1_cnt>s2_cnt) cout<<'<'<<endl;
            else if(s1_cnt<s2_cnt) cout<<'>'<<endl;
            else cout<<'='<<endl;
        }
        else if(s1[s1.size()-1]==s2[s2.size()-1]){
            if(s1_cnt>s2_cnt) cout<<'>'<<endl;
            else if(s1_cnt<s2_cnt) cout<<'<'<<endl;
            else cout<<'='<<endl;
        }
        if(s1[s1.size()-1]=='S' && s2[s2.size()-1]=='M'){
            cout<<'<'<<endl;
        }
        else if(s1[s1.size()-1]=='M' && s2[s2.size()-1]=='S'){
            cout<<'>'<<endl;
        }
        else if(s1[s1.size()-1]=='L' && s2[s2.size()-1]=='S'){
            cout<<'>'<<endl;
        }
        else if(s1[s1.size()-1]=='S' && s2[s2.size()-1]=='L'){
            cout<<'<'<<endl;
        }
        else if(s1[s1.size()-1]=='L' && s2[s2.size()-1]=='M'){
            cout<<'>'<<endl;
        }
        else if(s1[s1.size()-1]=='M' && s2[s2.size()-1]=='L'){
            cout<<'<'<<endl;
        }
    }
    return 0;
}