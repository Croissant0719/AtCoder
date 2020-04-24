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

char CONV1(char a, vector<char> b) {
  char r;
  REP(i, SIZE(b)) {
    if (a == b.at(i)) {
      r = i + '0';
      break;
    }
  }
  return r;
}

char CONV2(char a, vector<char> b) {
  int idx = a - '0';
  return b.at(idx);
}

int main()
{
  vector<char> b(10);
  REP(i, 10) cin >> b.at(i);
  int n; cin >> n;
  vector<string> a(n);
  REP(i, n) cin >> a.at(i);

  vector<ll> res(n);
  REP(i, n) {
    stringstream ss;
    REP(j, SIZE(a.at(i))) ss << CONV1(a.at(i)[j], b);
    res.at(i) = stoll(ss.str());
  }

  sort(ALL(res));
  REP(i, n) {
    string str_ = to_string(res.at(i));
    stringstream ss;
    REP(j, SIZE(str_)) ss << CONV2(str_[j], b);
    cout << ss.str() << endl;
  }
  return 0;
}
