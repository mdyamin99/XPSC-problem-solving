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
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int cnt=1;
            n-=2;
            while(true)
            {
                if(n>=7)
                {
                    cnt++;
                    n-=7;
                }
                else
                {
                    break;
                }
            }
            cout<<cnt<<endl;
        }

    }
    return 0;
}