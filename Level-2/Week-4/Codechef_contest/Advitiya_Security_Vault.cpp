#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;
int MOD = 1000000007;
int inv= 500000004;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >>t;
    vector<ll> res;
    
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        ll P = 1;
        for (int i = 0; i < N; i++) {
            if (A[i] == 0) {
                P = (P * K) % MOD;
            }
        }
        ll Q = 1;
        for (int j = 0; j < N; j++) {
            int i = N - 1 - j;
            if (A[i] != 0) {
                if (A[j] != 0 && A[j] != A[i]) {
                    Q = 0;
                    break;
                }
            } else {
                if (A[j] == 0) {
                    Q = (Q * K) % MOD;
                }
            }
        }
        ll R = 1;
        int half = N / 2;
        for (int i = 0; i < half; i++) {
            int j = N - 1 - i;
            if (A[i] != 0 && A[j] != 0) {
                if (A[i] != A[j]) {
                    R = 0;
                    break;
                }
            } else if (A[i] == 0 && A[j] == 0) {
                R = (R * K) % MOD;
            }
        }
        if (N % 2) {
            int m = N / 2;
            if (A[m] == 0) {
                R = (R * K) % MOD;
            }
        }
        ll twoP = (2 * P) % MOD;
        ll numerator = (twoP - Q + R) % MOD;
        if (numerator < 0) {
            numerator += MOD;
        }
        ll attempts = (numerator * inv) % MOD;
        
        res.push_back(attempts);
    }
    for (ll res : res) {
        cout << res << endl;
    }
    return 0;
}