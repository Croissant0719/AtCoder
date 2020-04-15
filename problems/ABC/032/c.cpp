#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<long long> s(N);
  for (int i = 0; i < N; i++) cin >> s[i];

  for (int i = 0; i < N; i++) {
    if (s[i] == 0) {
      cout << N << endl;
      return 0;
    }
  }

  int res = 0;
  int right = 0;
  long long mul = 1;
  for (int left = 0; left < N; ++left) {
    while (right < N && mul * s[right] <= K) {
        mul *= s[right];
        ++right;
    }
    res = max(res, right - left);
    if (left == right) ++right;
    else mul /= s[left];
  }

  cout << res << endl;
}
