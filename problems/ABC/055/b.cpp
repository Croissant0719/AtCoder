#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
  int  N;
  cin >> N;

  long result = 1;
  long denom = pow(10, 9) + 7;

  for (int i=1; i<=N; i++) {
    result *= i;
    result %= denom;
  }
  cout << result << endl;
}
