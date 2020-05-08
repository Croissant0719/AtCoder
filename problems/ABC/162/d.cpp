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
  ll N; cin >> N;
  string S; cin >> S;

  ll r = 0, g = 0, b = 0;
  for (auto c : S) {
    if (c == 'R') r++;
    else if (c == 'G') g++;
    else b++;
  }

  ll ans = r * g *  b;
  REP(i, N) {
    FOR(j, i+1, N-1) {
      if (S[i] == S[j]) continue;
      ll k = j * 2 - i;
      if (N <= k || S[i] == S[j] || S[i] == S[k] || S[j] == S[k]) continue;
      ans--;
    }
  }
  cout << ans << endl;
}
