#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()==1)
        {
            if(s[0] !='z')
            {
                cout<<s<<char(s[0]+1)<<endl;
            }
            else
            {
                cout<<s<<'a'<<endl;
            }
        }
        else
        {
            vector<char> v;
            bool flag=false;
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]==s[i+1] && flag==false)
                {
                    if(s[i] !='z')
                    {
                        v.push_back(s[i]);
                        v.push_back(char(s[i]+1));
                    }
                    else
                    {
                        v.push_back(s[i]);
                        v.push_back('a');
                    }
                    flag=true;
                }
                else
                {
                    v.push_back(s[i]);
                }
            }
            v.push_back(s[s.size()-1]);
            if(flag==false)
            {
                if(s[s.size()-1]!='z')
                {
                    v.push_back(char(s[s.size()-1]+1));
                }
                else
                {
                    v.push_back('a');
                }
            }
            for(char c:v)
            {
                cout<<c;
            }
            cout<<endl;
        }
    }
    return 0;
}