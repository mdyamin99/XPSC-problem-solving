#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

bool isPrime(long long  n) {
   if (n == 1) {
      return false;
   }
   for (int i = 2;i * i <= n;i++) {
      if (n % i == 0) {
         return false;
      }
   }

   return true;
}

bool isPerfectSquare(long long n) {
   long long x = sqrtl(n);
   return (x * x) == n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        long long x;
        cin >> x;
        if (isPerfectSquare(x) && isPrime(sqrtl(x))) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}