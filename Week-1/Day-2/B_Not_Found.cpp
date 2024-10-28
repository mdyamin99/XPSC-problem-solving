#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    string ss="abcdefghijklmnopqrstuvwxyz";
    sort(s.begin(),s.end());
    for(int i=0;i<ss.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(ss[i]==s[j])
            {
                ss[i]='$';
            }
        }
    }
    string ans;
    for(int i=0;i<26;i++)
    {
        if(ss[i]>='a' && ss[i]<='z')
        {
            ans.push_back(ss[i]);
        }
    }
    if(ans.size()==0)
    {
        cout<<"None"<<endl;
    }
    else
    {
        cout<<ans.front()<<endl;
    }
    return 0;
}