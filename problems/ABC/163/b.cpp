#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M; cin >> N >> M;
  vector<int> A(M);
  rep(i, M) cin >> A.at(i);

  int res = N;
  rep(i, M) {
    res -= A.at(i);
  }

  if (res < 0) res = -1;
  cout << res << endl;
  return 0;
}
