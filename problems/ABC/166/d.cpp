#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=(ll)(n)-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define SUM(x) accumulate(ALL(x), 0)
#define INF 1000000000000
#define MOD 10000007
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define MAXR 100000

ll five(ll &i) {
  return i * i * i * i * i;
}

int main()
{
  ll x; cin >> x;
  bool ans = false;
  REP(i, 10000) {
    ll f1 = five(i);
    REP(j, 10000) {
      ll f2 = five(j);
      if (five(i) + five(j) == x) {
        cout << i << " " << j * (-1) << endl;
        ans = true;
      } else if (five(i) - five(j) == x) {
        cout << i << " " << j << endl;
        ans = true;
      }
    }
    if (ans) break;
  }
  return 0;
}
