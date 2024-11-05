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
        string s1,s2;
        cin>>s1>>s2;
        int chef=0,chefina=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='R' && s2[i]=='S')
            {
                chef++;
            }
            else if(s2[i]=='R' && s1[i]=='S')
            {
                chefina++;
            }
            if(s1[i]=='P' && s2[i]=='R')
            {
                chef++;
            }
            else if(s2[i]=='P' && s1[i]=='R')
            {
                chefina++;
            }
            if(s1[i]=='S' && s2[i]=='P')
            {
                chef++;
            }
            else if(s2[i]=='S' && s1[i]=='P')
            {
                chefina++;
            }
        }
        if(chef>chefina)
        {
            cout<<"0"<<endl;
        }
        else if(chef==chefina)
        {
            cout<<"1"<<endl;
        }
        else
        {
            int cnt=0;
            while(true)
            {
                chef+=1;
                chefina-=1;
                cnt++;
                if(chefina<chef)
                {
                    cout<<cnt<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}