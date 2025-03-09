#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n, x, y;
        cin >> n >> x >> y;
        ll countX = n / x;
        ll countY = n / y;
        ll countXY = n / lcm(x, y);
        countX -= countXY;
        countY -= countXY;
        auto sumN = [](ll k) { return k * (k + 1) / 2; };
        ll result = sumN(n) - sumN(n - countX) - sumN(countY);
        cout << result << endl;
    }
    return 0;
}