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

int main()
{
  int n, m, q; cin >> n >> m >> q;
  vector<vector<int>> s(q, vector<int>(4));
  REP(i, q) {
    REP(j, 4) cin >> s.at(i).at(j);
  }

  vector<int> a(n);
  a.at(n - 1) = m;

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= m; j++) {

    }
  }

  REP(i, q) {
    REP(j, 4) {



    }
  }

  cout << n << endl;
  return 0;
}
