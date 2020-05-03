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
  ll N, M; cin >> N >> M;
  vector<ll> H(N);
  REP(i, N) cin >> H.at(i);

  vector<ll> A(M);
  vector<ll> B(M);
  REP(i, M) {
    cin >> A.at(i) >> B.at(i);
  }

  vector<ll> ANS(N, 1);
  REP(i, M) {
    ll a_ = A.at(i) - 1;
    ll b_ = B.at(i) - 1;

    if (H.at(a_) < H.at(b_)) {
      ANS.at(a_) = 0;
    } else if (H.at(a_) == H.at(b_)) {
      ANS.at(a_) = 0;
      ANS.at(b_) = 0;
    } else {
      ANS.at(b_) = 0;
    }
  }
  cout << SUM(ANS) << endl;
  return 0;
}
