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
        int l,r;
        cin>>l>>r;
        int cnt=0;
        for(int i=l;i<=r;i++)
        {
            int x=i%10;
            if(x==2 || x==3 || x==9)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}