#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    map<pair<string,string>,bool> mp;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        mp[{s1,s2}]=true;
    }
    cout<<mp.size()<<endl;
    return 0;
}