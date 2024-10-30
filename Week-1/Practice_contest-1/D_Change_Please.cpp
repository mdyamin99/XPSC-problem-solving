#include<iostream>
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
        if(a==100)
        {
            cout<<"0"<<endl;
        }
        else if(a<91)
        {
            int ans=100-a;
            int x=ans/10;
            cout<<x<<"0"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}