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

ll inc(ll i, ll k) {
  return (1 + i * k);
}

int main()
{
  ll a, k; cin >> a >> k;
  ll goal = 2000000000000;
  if (k == 0 ) {
    cout << goal - a << endl;
    return 0;
  }

  int cnt = 0;
  ll sum = a;
  while (sum < goal) {
    sum += inc(sum, k);
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}
