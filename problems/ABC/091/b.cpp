#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N; cin >> N;
  vector<string> s(N);
  rep(i, N) cin >> s.at(i);

  int M; cin >> M;
  vector<string> t(M);
  rep(i, M) cin >> t.at(i);

  vector<int> result;
  rep(i, N) {
    int count = 0;
    rep(j, N) {
      if(s.at(i) == s.at(j)) {
        count++;
      }
    }
    result.push_back(count);
  }

  rep(i, M) {
    rep(j, N) {
      if(t.at(i) == s.at(j)) {
        result.at(j)--;
      }
    }
  }
  sort(result.begin(), result.end(), greater<int>());
  int max_ = max(0, result[0]);
  cout << max_ << endl;
  return 0;
}
