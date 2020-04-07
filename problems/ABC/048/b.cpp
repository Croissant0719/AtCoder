#include <iostream>
using namespace std;

long f(long i, long j) {
  if (i == -1) return 0;
  else return i / j + 1;
}

int main() {
  long  a, b, x;
  cin >> a >> b >> x;
  cout << f(b, x) - f(a - 1, x) << endl;
  return 0;
}
