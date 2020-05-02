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

ll solve(const string &S) {
  int N = SIZE(S);
  vector<ll> val(2019, 0);
  ll fac = 1;
  ll cur = 0;
  val[cur]++;
  REP(i, N) {
    ll add = S[N-1-i] - '0';
    cur = (cur + fac * add) % 2019;
    fac = (fac * 10) % 2019;
    val[cur]++;
  }
  ll res = 0;
  REP(i, SIZE(val)) {
    res += val[i] * (val[i] - 1) / 2;
  }
  return res;
}

int main()
{
  string S; cin >> S;
  cout << solve(S) << endl;;
  return 0;
}
