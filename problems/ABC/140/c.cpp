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
  vector<int> b(n-1);
  REP(i, n-1) cin >> b.at(i);

  ll res = 0;
  res += b.at(0);
  res += b.at(n - 2);
  for (int i = 1; i <= n - 2; i++) {
    res += min(b.at(i), b.at(i - 1));
  }
  cout << res << endl;
  return 0;
}

// https://drken1215.hatenablog.com/entry/2019/09/16/201500