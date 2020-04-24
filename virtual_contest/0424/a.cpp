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
  int h, w; cin >> h >> w;
  vector<vector<char>> s(h, vector<char>(w));
  REP(i, h) {
    string s_; cin >> s_;
    REP(j, w) {
      s.at(i).at(j) = s_[j];
    }
  }

  int bk = 0;
  int wh = 0;
  REP(i, h) {
    REP(j, w) {
      if (s.at(i).at(j) == '.') wh++;
      else bk++;
    }
  }

  if (wh == h * w) {
    cout << "Yes" << endl;
    return 0;
  }

  int cnt = 0;
  vector<int> di = { 0, -1, 0, 1 };
  vector<int> dj = { -1, 0, 1, 0 };
  REP(i, h) {
    REP(j, w) {
      if (s.at(i).at(j) == '.') continue;
      REP(d, 4) {
        int ni = i + di.at(d);
        int nj = j + dj.at(d);
        if (ni < 0 || h <= ni) continue;
        if (nj < 0 || w <= nj) continue;
        if (s.at(ni).at(nj) == '#') {
          cnt++;
          break;
        }
      }
    }
  }

  if (cnt == bk) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
