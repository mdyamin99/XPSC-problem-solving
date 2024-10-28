#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<a+b<<endl;
    }
    else if(a>b)
    {
        cout<<(a*2)-1<<endl;
    }
    else
    {
        cout<<(b*2)-1<<endl;
    }
    return 0;
}