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
  vector<vector<char>> c(h, vector<char>(w));
  REP(i, h) {
    REP(j, w) {
      cin >> c.at(i).at(j);
    }
  }

  REP(i, h) {
    REP(j, w) {
      cout << c.at(i).at(j);
    }
    cout << endl;
    REP(j, w) {
      cout << c.at(i).at(j);
    }
    cout << endl;
  }
  return 0;
}
