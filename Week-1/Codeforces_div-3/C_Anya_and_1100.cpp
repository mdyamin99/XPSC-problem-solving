#include<bits/stdc++.h>
using namespace std;

bool ok(const string& ss,int p)
{
    if(p<0 || p+3>=ss.size())
    {
        return false;
    }
    return ss.substr(p,4)=="1100";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int a;
        cin>>s>>a;
        int count = 0;
        for(int i=0;i+3<s.size();i++)
        {
            if(ok(s,i))
            {
                count++;
            }
        }
        while(a--)
        {
            int a,b;
            cin>>a>>b;
            a--;
            for(int i=a-3;i<=a;i++)
            {
                if(ok(s,i))
                {
                    count--;
                }
            }

            s[a]='0'+b;

            for(int i=a-3;i<=a;i++)
            {
                if(ok(s,i))
                {
                    count++;
                }
            }
            if(count>0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}