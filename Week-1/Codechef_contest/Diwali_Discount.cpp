#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    if(b>=a)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<a-b<<endl;
    }
    return 0;
}