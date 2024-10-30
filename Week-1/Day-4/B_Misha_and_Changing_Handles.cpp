#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    map<string,string> ans,has;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(has.find(s1) != has.end())
        {
            string s=has[s1];
            ans[s]=s2;
            has.erase(s1);
            has[s2]=s;
        }
        else
        {
            ans[s1]=s2;
            has[s2]=s1;
        }
    }
    cout<<ans.size()<<endl;
    for(auto [x,y]:ans)
    {
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}