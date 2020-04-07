#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int NCR(int n, int r)
{
  if (r == 0) return 1;
  if (r > n / 2) return NCR(n, n - r);

  long res = 1;
  for (int k = 1; k <= r; ++k)
  {
      res *= n - k + 1;
      res /= k;
  }
  return res;
}

int main()
{
  int n, a, b;
  cin >> n >> a >> b;

  int sum = 0;
  for (int i=1; i<=n; i++) {
    if (i == a || i == b) continue;
    sum += NCR(n, i);
  }
  cout << sum << endl;
}
