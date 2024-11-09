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
        int a;
        cin>>a;
        int e_cnt=0,o_cnt=0;
        for(int i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                if(i%2==0)
                {
                    e_cnt++;
                }
                else
                {
                    o_cnt++;
                }
            }
            
        }
        if(e_cnt==o_cnt)
        {
            cout<<"0"<<endl;
        }
        else if(e_cnt>o_cnt)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}