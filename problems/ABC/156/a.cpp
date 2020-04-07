#include <iostream>
using namespace std;

int main() {
  int n, r;
  cin >> n >> r;
  int res;
  if (n < 10) {
    res = 100 * (10 - n) + r;
  } else {
    res = r;
  }
  cout << res << endl;
}
