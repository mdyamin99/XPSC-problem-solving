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
        
        vector<int> cap,sml;
        vector<bool> ok(s.size()+1,true);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
            {
                if(!sml.empty())
                {
                    ok[sml.back()]=false;
                    sml.pop_back();
                }
                ok[i]=false;
            }
            else if(s[i]=='B')
            {
                if(!cap.empty())
                {
                    ok[cap.back()]=false;
                    cap.pop_back();
                }
                ok[i]=false;
            }
            else
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    cap.push_back(i);
                }
                else
                {
                    sml.push_back(i);
                }
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(ok[i]==true)
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}