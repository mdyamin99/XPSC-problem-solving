#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    vector<int> l(m + 1), r(m + 1);
    vector<ll> d(m + 1);
    for (int i = 1; i <= m; ++i) {
        cin >> l[i] >> r[i] >> d[i];
    }
    vector<ll> c(m + 2, 0);
    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        c[x]++;
        c[y + 1]--;
    }
    for (int i = 1; i <= m; ++i) {
        c[i] += c[i - 1];
    }
    vector<ll> b(n + 2, 0);
    for (int i = 1; i <= m; ++i) {
        long long total_increment = d[i] * c[i];
        b[l[i]] += total_increment;
        b[r[i] + 1] -= total_increment;
    }
    for (int i = 1; i <= n; ++i) {
        b[i] += b[i - 1];
        a[i] += b[i];
        cout << a[i] << " ";
    }
    return 0;
}