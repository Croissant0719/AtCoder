#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N; cin >> N;
  vector<int> a(N);
  rep(i, N) cin >> a.at(i);
  int mean = accumulate(a.begin(), a.end(), 0) / a.size();
  rep (i, N) cout << abs(a.at(i) - mean) << endl;
}
