#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=(ll)(n)-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
#define FORMAP(x, mp) for(auto x=mp.begin();x!=mp.end();x++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define SUM(x) accumulate(ALL(x), 0)
#define print(x) cout << x
#define println(x) cout << x << endl
#define printd(x, f) cout << fixed << setprecision(f) << x << endl

#define PB push_back
#define MP make_pair
#define F first
#define S second

#define INF 1000000000000
#define MOD 10000007
#define MAXR 100000
#define PI acos(-1.0)

int main()
{
  int n, m; cin >> n >> m;
  double ans = fabs((11.0 / 2.0) * m - 30 * (n % 12));
  if (ans > 180) println(360 - ans);
  else println(ans);
  return 0;
}
