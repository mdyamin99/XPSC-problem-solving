#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    map<string,int> mp;
    while(t--)
    {
        string s;
        cin>>s;
        mp[s]++;
        if(mp[s]>=2)
        {
            cout<<s<<mp[s]-1<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
        }
    }
    return 0;
}