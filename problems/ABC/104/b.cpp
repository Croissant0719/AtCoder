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
  string s; cin >> s;
  string ans;
  if (s[0] == 'A') s[0] = '0';
  else {
    cout << "WA" << endl;
    return 0;
  }

  int cnt = 0;
  REP(i, SIZE(s)) {
    if (i == 0 || i == 1 || i == SIZE(s) - 1) continue;
    if (s[i] == 'C') {
      s[i] = '0';
      cnt++;
    }
  }
  if (cnt != 1) {
    cout << "WA" << endl;
    return 0;
  }

  REP(i, SIZE(s)) {
    if (s[i] == '0') continue;
    if ('a' <= s[i] && s[i] <= 'z') ans = "AC";
    else {
      ans = "WA";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
