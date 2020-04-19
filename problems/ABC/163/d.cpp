#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <math.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int NCR(int n, int r) {
  long long div = pow(10, 9) + 7;

  if (r == 0) return 1;
  if (r > n / 2) return NCR(n, n - r);

  long res = 1;
  for (int k = 1; k <= r; ++k) {
      res *= n - k + 1;
      res /= k;
      res = res % div;
  }
  return res;
}


int main() {
  int n, k; cin >> n >> k;

  long long p = pow(10, 100);

  if (n == (k - 1)) {
    cout << 1 << endl;
    return 0;
  }

  long long res = 0;
  rep(i, n-k+1) {
    res += NCR(n+1, k+i);
  }

  // res += NCR(n+1, k);


  cout << res << endl;
  return 0;
}
