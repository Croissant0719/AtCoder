#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n; cin >> n;
  vector<long long> a(n);
  rep(i, n) cin >> a.at(i);

  vector<vector<long long> > data(n, vector<long long>(n));
  rep(i, n) {
    rep(j, n) {
      if (i == j) data.at(i).at(j) = 0;
      else {
        int distance;
        if (i < j) distance = j - i;
        else distance = i - j;
        data.at(i).at(j) = a.at(i) * distance;
      }
    }
  }
  vector<long long> res(n);
  rep(i, n) {
    int i_ = 0;
    rep(j, n) {
      int j_ = (i + j) % 4;
      res.at(i) += data.at(i_).at(j_);
      i_++;
    }
  }
  sort(res.begin(), res.end(), greater<int>());
  cout << res[0] << endl;
  return 0;
}
