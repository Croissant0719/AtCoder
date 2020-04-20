#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <math.h>

typedef long long ll;
const int MOD = (int)1e9 + 7;

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// ex1
// int main() {
//   ll n, k; cin >> n >> k;
//   ll res = 0;
//   for(int i=k; i<=n+1; ++i) {
//     ll ans = i * n - pow(i, 2) + i + 1;
//     res =  (res + ans) % MOD;
//   }
//   cout << res << endl;
//   return 0;
// }

// ex2
int main() {
  ll n, k; cin >> n >> k;
  ll M = n+1, L = k-1;
  ll res = M*(M*M+5)/6 + L*(L*L*2+L*3-5-M*3*(L+1))/6;
  cout << res % MOD << endl;
  return 0;
}
