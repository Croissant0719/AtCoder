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
  int n; cin >> n;
  vector<int> t(n);
  REP(i, n) cin >> t.at(i);

  int m; cin >> m;
  vector<int> p(m);
  vector<int> x(m);
  REP(i, m) cin >> p.at(i) >> x.at(i);

  REP(i, m) {
    int sum = 0;
    vector<int> t_(n);
    t_ = t;
    t_.at(p.at(i) - 1) = x.at(i);
    sum = SUM(t_);
    cout << sum << endl;
  }
  return 0;
}
