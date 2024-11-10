#include<iostream>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float x,y,z;
    cin>>x>>y>>z;
    float a=y/2;
    if(x+y+z==4){
        x+=a,z+=a;
        if(x>z){
            yes;
        }
        else{
            no;
        }
    }
    else{
        float b=4-(x+y+z);
        x+=b,x+=a,z+=a;
        if(x>z){
            yes;
        }
        else{
            no;
        }
    }
    return 0;
}