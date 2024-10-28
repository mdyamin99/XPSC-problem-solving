#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin>>a>>b>>c;
    int ans=0,cnt=a;
    while(true)
    {
        if(cnt>c)
        {
            break;
        }
        cnt+=a;
        ans+=b;
    }
    cout<<ans<<endl;
    return 0;
}